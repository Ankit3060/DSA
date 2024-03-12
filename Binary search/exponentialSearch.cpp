// This is exponential search. this is better than binary search
// it's time complexity is 2^(logm-1)

#include <bits/stdc++.h>
using namespace std;

int bs(vector<int>&arr,int s,int e,int x){
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]<x){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}


int exponential(vector<int>& arr, int x) {
    int n = arr.size();
    if (arr[0] == x) {
        return {0};
    }
    int i = 1;
    while (i < n && arr[i] <= x) {
        i = i * 2;
    }
    return bs(arr, i / 2, min(i, n - 1), x);
}

int main() {
    vector<int> arr = {3,4,5,6,11,13,14,15,56,70};
    int x = 13;
    int ans = exponential(arr, x);
    cout<<x <<" It is found at the index :"<< ans << endl;
    return 0;
}