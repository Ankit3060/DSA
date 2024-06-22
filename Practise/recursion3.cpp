#include<bits/stdc++.h>
using namespace std;

int solve(int n,int x, int y, int z){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    int a = solve(n-x,x,y,z)+1;
    int b = solve(n-z,x,y,z)+1;
    int c = solve(n-y,x,y,z)+1;
    int ans = max(a,max(b,c));
    return ans;
}

void adjacentSum(vector<int>&arr,int sum,int &maxi,int i){
    if(i>=arr.size()){
        maxi = max(sum,maxi);
        return;
    }
    //exclude
    adjacentSum(arr,sum,maxi,i+1);
    //include
    sum += arr[i];
    adjacentSum(arr,sum,maxi,i+2);
}

int main(){
    // int n=7;
    // int x=5;
    // int y=2;
    // int z=2;

    // int ans = solve(n,x,y,z);
    // if(ans < 0)
    //     ans =0;
    // cout<<ans<<endl;

    vector<int>arr = {2,1,4,9};
    int sum = 0;
    int maxi = INT_MIN;
    int i =0;
    adjacentSum(arr,sum,maxi,i);
    cout<<maxi<<endl;
    return 0;
}