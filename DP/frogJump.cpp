// This is frog jump problem the frog can jump either 1 step or 2 step
// In this problem we reach the final tep with minimum energy lost
// energy lost = abs[height[i]-height[i-1]]

// We solved this problem by memoiation DP solution

#include<bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>&heights,vector<int>&dp){
    if(n==0) return 0;

    if(dp[n] != -1) return dp[n];

    int left = solve(n-1,heights,dp) + abs(heights[n]-heights[n-1]);
    int right = INT_MAX;
    if(n>1) right = solve(n-2,heights,dp) + abs(heights[n]-heights[n-2]);

    return dp[n] = min(left,right);
}

int frog(int n, vector<int>& height){
    vector<int>dp(n+1,-1);
    return solve(n-1,height,dp);
}
int main(){
    vector<int>height={10, 20 ,30 ,10};
    int n = height.size();

    cout<<frog(n,height);
    return 0;
}