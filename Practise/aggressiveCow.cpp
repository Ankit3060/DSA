#include<bits/stdc++.h>
using namespace std;

bool sol(vector<int>stall,int k, int solu){
    int pos = stall[0];
    int count = 1;
    for(int i=1;i<stall.size();i++){
        if(stall[i]-pos>=solu){
            count++;
            pos = stall[i];
        }
        if(count == k){
            return true;
        }
    }
    return false;
}

int answer (vector<int> stall , int k, int n){
    sort(stall.begin(),stall.end());
    int start = 0;
    int end = stall[stall.size()-1]-stall[0];
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if(sol(stall,k,mid)){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    vector<int> stall = {1,2,4,8,9};
    int k=3;
    int n= stall.size();
    cout<<answer(stall,k,n);
    return 0;
}