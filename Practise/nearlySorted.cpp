#include<bits/stdc++.h>
using namespace std;

int nbs(vector<int>&arr, int target){
    int e=arr.size();
    int s=0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid-1]==target){
            return mid-1;
        }
        else if(arr[mid+1]==target){
            return mid+1;
        }
        else if(arr[mid]>target){
            e=mid-2;
        }
        else{
            s=mid+2;
        }
    }
    return -1;
}

int main(){
    vector<int>arr={10,3,40,20,50,70,80};
    int target = 40;
    int ans = nbs(arr,target);
    cout<<ans;
    return 0;
}