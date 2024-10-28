// This is frog jump problem the frog can jump either 1 step or 2 step
// In this problem we reach the final step with minimum energy lost
// energy lost = abs[height[i]-height[i-1]]

// We solved this problem by tabulation DP solution
// T.C = O(n)
// S.C = O(n)


#include<bits/stdc++.h>
using namespace std;

int frog(int n, vector<int>&heights){
    // vector<int>dp(n,0);
    // dp[0] = 0;

    // for(int i=1;i<n;i++){
    //     int fs = dp[i-1] + abs(heights[i]-heights[i-1]);
    //     int ss = INT_MAX;
    //     if(i>1) ss = dp[i-2] + abs(heights[i]-heights[i-2]);
    //     dp[i] = min(fs,ss);
    // }
    // return dp[n-1];

    int prev = 0;
    int prev2 = 0;
    int curr;

    for(int i=1;i<n;i++){
        int fs = prev + abs(heights[i]-heights[i-1]);
        int ss = INT_MAX;
        if(i>1) ss = prev2 + abs(heights[i]-heights[i-2]);
        
        curr = min(fs,ss);
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main(){
    vector<int> height = {10, 20 ,30 ,10};
    int n = height.size();

    cout<<frog(n,height);
    return 0;
}