// This program is used to find the factorial of large number
// The approach is to use array to store the result of multiplication of each digit of the number
// eg. 5! = 120

#include <bits/stdc++.h>
using namespace std;

vector<int> Largefactorial(int n){
    vector<int>ans;
    ans.push_back(1);
    int carry=0;
    for(int i=2;i<=n;i++){
        for(int j=0;j<ans.size();j++){
            int x = (ans[j]*i)+carry;
            ans[j] = x%10;
            carry = x/10;
        }
        while(carry){
            ans.push_back(carry%10);
            carry = carry/10;
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number to find the factorial"<<endl;
    cin>>n;
    vector<int> ans = Largefactorial(n);
    for(auto e : ans){
        cout<<e<<endl;
    }
    return 0;
}