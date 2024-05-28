#include<bits/stdc++.h>
using namespace std;

//Normal factorial
// int factorials(int n){
//     int res = 1;
//     for(int i=1;i<=n;i++){
//         res *= i;
//     }
//     return res;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans = factorials(n);
//     cout<<ans;
//     return 0;
// }

//Adding two large number
// vector<int> addtwo(vector<int>&arr, vector<int>brr, int n, int m){
//     int carry=0;
//     vector<int> sum;
//     int i=n-1;
//     int j=m-1;

//     while(i>=0 && j>=0){
//         int x = arr[i]+brr[j]+carry;
//         int digit = x%10;
//         sum.push_back(digit);
//         carry = x/10;
//         i--;
//         j--;
//     }
//     while(i>=0){
//         int x = arr[i]+carry;
//         int digit = x%10;
//         sum.push_back(digit);
//         carry = x/10;
//         i--;
//     }
//     while(j>=0){
//         int x = brr[j]+carry;
//         int digit = x%10;
//         sum.push_back(digit);
//         carry = x/10;
//         j--;
//     }
//     if(carry){
//         sum.push_back(carry);
//     }
//     reverse(sum.begin(),sum.end());

//     return sum;
// }

// int main(){
//     vector<int> arr = {2,3,5};
//     vector<int> brr = {4,5,6};
//     int n= arr.size();
//     int m = brr.size();
//     vector<int> ans = addtwo(arr,brr,n,m);
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }

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
        cout<<e;
    }
    return 0;
}