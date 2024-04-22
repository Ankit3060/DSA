// This is the code for finding the minimum number of coins required to make a target sum
// eg. Input: {1,2,3} target = 5 -> Output: 2 (2 coins of 2,3)

#include<bits/stdc++.h>
using namespace std;

//Method 1
int solve(vector<int>& arr, int target){
    //Base case
    if(target == 0){
        return 0;
    }
    if(target < 0){
        return INT_MAX;
    }
    //Recursive case
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = solve(arr, target-arr[i]);
        if(ans != INT_MAX){
            mini = min(mini, ans+1);
        }
    }
    return mini;
}

//Method 2
int solve2(vector<int>&arr, int target,int output){
    if(target == output){
        return 0;
    }
    if(target < output){
        return INT_MAX;
    }
    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans = solve2(arr,target,output+arr[i]);
        if(ans != INT_MAX){
            mini = min(mini,ans+1);
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {1,2};
    int target = 3;
    int ans = solve(arr, target);
    cout<<ans<<endl;
    //Method 2
    int output=0;
    int ans2 = solve2(arr,target,output);
    cout<<ans2<<endl;
    return 0;
}