//It tells about the total occurance of the key element 
//For example in the array [1 2 2 2 3 4 5] here first and last occurance of the element 2 is 1 & 3 indexes there difference is (3-1+1=3)
//It work on the principle of Binary Search
#include <bits/stdc++.h>
using namespace std;

int firstOccurance(vector<int>&arr,int n, int target){
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

int lastOccurance(vector<int>&arr,int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}





int main() {
    vector<int>arr = {1,2,3,4,4,4,4,8,9,10};
    int n = arr.size();
    int target = 4;
    int first = firstOccurance(arr,n,target);
    int last = lastOccurance(arr,n,target);
    int totalOccurance = (last - first+1);
    cout<<"Toal occurance is "<<target<<" is at : "<<totalOccurance<<endl;
    return 0;
    return 0;
}