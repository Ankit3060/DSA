//Nearly sorted array is an array in which every element is at max k distance away from its original position. 

#include <bits/stdc++.h>
using namespace std;

int nearlySorted(vector<int>&arr,int target){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){
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
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() {
    vector<int>arr={10,3,40,20,50,80,70};
    int target=40;
    int ans = nearlySorted(arr,target);
    cout<<"Index is :"<<ans<<endl;
    return 0;
}