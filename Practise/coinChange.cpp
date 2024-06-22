#include<bits/stdc++.h>
using namespace std;

int coinss(vector<int>& arr,int target){
    if(target == 0){
        return 0;
    }
    if(target<0){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = coinss(arr,target-arr[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }
    return mini;
}

int coinsss(vector<int>&arr,int target,int output){
    if(target==output){
        return 0;
    }
    if(target<output){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = coinsss(arr,target,output+arr[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int>arr = {1,2};
    int target = 5;
    int output = 0;
    int ans = coinss(arr,target);
    cout<<ans<<endl;

    int ans2 = coinsss(arr,target,output);
    cout<<ans2;
    return 0;
}