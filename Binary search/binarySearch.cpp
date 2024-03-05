#include <bits/stdc++.h>
using namespace std;

int binarySearchs(vector<int>&arr,int n,int target){
    // Method 1
    // This is STL approach
    // if(binary_search(arr.begin(),arr.end(),target)){
    //     cout<<"Element found at index :" <<lower_bound(arr.begin(),arr.end(),target)-arr.begin()<<endl;
    // }
    // else{
    //     cout<<"Element not found"<<endl;
    // }
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            cout<<"Element found at index : "<<mid<<endl;
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    cout<<"Element not found"<<endl;
    return -1;
}

int main() {
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int target = 8;
    int ans = binarySearchs(arr,n,target);
    return 0;
}