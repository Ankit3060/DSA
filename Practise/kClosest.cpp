#include<bits/stdc++.h>
using namespace std;
vector<int> kbs(vector<int>&arr,int k,int x){
    int l=0;
    int h=arr.size()-1;
    while (h-l>=k)
    {
        if(x-arr[l]>arr[h]-x){
            l++;
        }
        else{
            h--;
        }
    }
    vector<int>ans;
    for(int i=l;i<=h;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}
int main(){
    vector<int>arr={5,6,7,15,20,30,35,37,40};
    int k=4;
    int x=20;
    vector<int> ans = kbs(arr, k, x);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " "<<endl;
    }
    return 0;
}