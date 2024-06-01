#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>&arr,int n, int target){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2,4,6,8,10,12,14,16};
    int n= arr.size();
    int target = 14;
    int ans = bs(arr,n,target);
    cout<<"answer is :"<<ans;
    return 0;
}