// This is memoization technique to solve the fibonacci series
// in this technique we store the value that are alredy visited

#include<bits/stdc++.h>
using namespace std;

int fib(int n, vector<int>& dp){
    if(n<=1 || n<=0){
        return n;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    return dp[n]=fib(n-1,dp)+fib(n-2,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>dp (n+1,-1);
    cout<<fib(n,dp);
    return 0;
}