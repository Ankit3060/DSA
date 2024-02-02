// To add two numbers represented by array
// e.g. arr = {1,2,3} and brr = {4,5,6}
// The sum of these two numbers is 123+456 = 579

#include <bits/stdc++.h>
using namespace std;

vector<int> addTwo(vector<int>&arr,vector<int>&brr, int n, int m){
    int carry=0;
    vector<int> sum;
    int i=n-1;
    int j=m-1;

    while(i>=0 && j>=0){
        sum.push_back((arr[i]+brr[j]+carry)%10);
        carry = (arr[i]+brr[j]+carry)/10;
        i--;
        j--;
    }
    while(i>=0){
        int x = (arr[i]+carry);
        int digit = x%10;
        sum.push_back(digit);
        carry = x/10;
        i--;
    }
    while(j>=0){
        int x = (brr[j]+carry);
        int digit = x%10;
        sum.push_back(digit);
        carry = x/10;
        j--;
    }
    if(carry){
        sum.push_back(carry);
    }
    reverse(sum.begin(),sum.end());

    return sum;

}

int main() {
    vector<int>arr = {1,2,3};
    vector<int>brr = {4,5,6};
    int n=arr.size();
    int m=brr.size();
    vector<int>ans = addTwo(arr,brr,n,m);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}