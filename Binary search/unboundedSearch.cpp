// This is unbounded search. this is better than binary search.  IOn this the end part is unknown
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

int unbounded(vector<int>& arr, int x) {
    int i=0;
    int j=1;
    while(arr[j]<x){
        i=j;
        j=j*2;
    }
    return bs(arr,i,j,x);
}

int main() {
    vector<int> arr = {3,4,5,6,11,13,14,15,56,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84};
    int x = 13;
    int ans = unbounded(arr, x);
    cout<<x <<" It is found at the index :"<< ans << endl;
    return 0;
}