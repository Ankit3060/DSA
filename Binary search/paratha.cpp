#include <bits/stdc++.h>
using namespace std;

bool isPossibe(vector<int> &ranks,int nP,int mid){
    int paratha=0;
    for(int i=0;i<ranks.size();i++){
        int time=0;
        int R=ranks[i] , j=1;
        while(true){
            if(time + R*j <= mid){
                paratha++;
                time+=R*j;
                j++;
            }
            else{
                break;
            }
        }
        if(paratha>=nP){
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(int nP,vector<int> &ranks){
    int start=0;
    int highestRank = *max_element(ranks.begin(),ranks.end());
    int end = highestRank * (nP*(nP+1)/2);
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(isPossibe(ranks,nP,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int nP,nC;
        cin>>nP>>nC;
        vector<int> ranks;
        while(nC--){
            int rank;
            cin>>rank;
            ranks.push_back(rank);
        }
        sort(ranks.begin(),ranks.end());
        // cout<<endl;
        cout<<minTimeToCompleteOrder(nP,ranks)<<endl;
    }   
    return 0;
}