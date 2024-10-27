// This is fibonacci series problem using tabulation DP
// In tabulation we go from bottom to up approach

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int prev = 1;
    int prev2 = 0;

    for(int i=2;i<=n;i++){
        int curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout<<prev;
    return 0;
}