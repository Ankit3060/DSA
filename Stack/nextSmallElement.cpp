// This code is fro finding next smallest element from the array
// Eg. [2,1,4,3] 
// => 1. next smallest of 2 is 1
// => 2. next smallest of 1 is -1 (as nothing is smallest than 1)
// => 3. next smallest of 4 is 3
// => 4. next smallest of 3 is -1 (as nothing is smallest than 3 and it is last digit)

#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallestElement(vector<int>&arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,4,3};
    int n = arr.size();
    vector<int> ans = nextSmallestElement(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" , ";
    }
    return 0;
}