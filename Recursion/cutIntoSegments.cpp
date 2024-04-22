#include<bits/stdc++.h>
using namespace std;

int solve(int n, int x, int y, int z){
    //Base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    //Recursive case
    int a=0,b=0,c=0;
    // if(n-x >= 0 && n-y >= 0 && n-z >= 0){
    //     a = solve(n-x,x,y,z)+1;
    //     b = solve(n-y,x,y,z)+1;
    //     c = solve(n-z,x,y,z)+1;
    // }
    a = solve(n-x,x,y,z)+1;
    b = solve(n-y,x,y,z)+1;
    c = solve(n-z,x,y,z)+1;
    int ans = max(a,max(b,c));
    return ans;
}

int main(){
    int n=8;
    int x=3;
    int y=3;
    int z=3;
    int ans = solve(n,x,y,z);
    if(ans < 0){
        ans = 0;
    }
    cout<<ans<<endl;
    return 0;
}