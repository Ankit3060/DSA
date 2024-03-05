//It tells about the First occurance of the key element 
//For example in the array [1 2 2 2 3 4 5] here first occurance of the element 2 is 1  indexes
//It work on the principle of Binary Search
#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&arr,int n, int target){

    // Method 1
    // auto ans = lower_bound(arr.begin(),arr.end(),target);
    // cout<<"First occurance of "<<target<<" is at : "<<ans-arr.begin()<<endl;

    // Method 2
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1
;        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main() {
    vector<int>arr = {1,2,3,4,4,4,4,8,9,10};
    int n = arr.size();
    int target = 4;
    int ans = firstOccurance(arr,n,target);
    cout<<"First occurance of "<<target<<" is at : "<<ans<<endl;
    return 0;
}