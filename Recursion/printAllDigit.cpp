#include<bits/stdc++.h>
using namespace std;

void printDigit(int n){
    if(n==0){
        return;
    }
    int digit = n%10;
    int newN = n/10;
    printDigit(newN);
    cout<<digit<<" ";

    //We can write in this way
    // printDigit(n/10);
    // cout<<n%10<<" ";
}

int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }

    //This is the iterative way to print all the digits of a number
    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     int digit = n%10;
    //     ans.push_back(digit);
    //     n = n/10;
    // }
    // reverse(ans.begin(),ans.end());
    // for(auto x: ans){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    //This is the recursive way to print all the digits of a number
    printDigit(n);
    return 0;
}