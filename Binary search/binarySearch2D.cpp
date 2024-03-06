//Binary Search in 2D array

#include <bits/stdc++.h>
using namespace std;

int binary2D(vector<vector<int>>&arr,int n,int m,int target){
    int s=0;
    int total = n*m;
    int e=total-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        int rowIndex = mid/m;
        int colIndex = mid%m;
        if(arr[rowIndex][colIndex]==target){
            cout<<"found at :"<<rowIndex<<","<<colIndex<<endl;
            return target;
        }
        else if(arr[rowIndex][colIndex]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() {
    vector<vector<int>>arr={{1,2,3,4},
                            {5,6,7,8},
                            {9,10,11,12},
                            {13,14,15,16}};
    int n=arr.size();
    int m=arr[0].size();
    int target=11;
    int ans = binary2D(arr,n,m,target);
    return 0;
}