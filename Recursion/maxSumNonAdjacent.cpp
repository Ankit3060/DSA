//This is the code for finding the maximum sum of non-adjacent elements in an array
//eg. Input: {2,1,4,9} -> Output: 11 (2+9)

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& arr, int i, int sum, int& maxi){
    //Base case
    if(i>=arr.size()){
        maxi = max(maxi,sum);
        return;
    }
    //Recursive case
    //Exclude
    solve(arr,i+1,sum,maxi);
    //Include
    solve(arr,i+2,sum+arr[i],maxi);
}

int main(){
    vector<int> arr = {2,1,4,9};
    int sum =0;
    int maxi = INT_MIN;
    int i=0;
    solve(arr, i,sum,maxi);
    cout<<maxi<<endl;
    return 0;
}