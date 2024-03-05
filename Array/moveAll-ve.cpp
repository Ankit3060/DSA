#include <bits/stdc++.h>
using namespace std;

void moveAllNegative(vector<int>&arr,int n){
    // Method 1
    // This is naive approach
    // sort(arr.begin(),arr.end());

    // Method 2
    //using two pointer
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]<0 && arr[h]<0){
            l++;
        }
        else if(arr[l]>0 && arr[h]<0){
            swap(arr[l],arr[h]);
            l++;
            h--;
        }
        else if(arr[l]>0 && arr[h]>0){
            h--;
        }
        else{
            l++;
            h--;
        }
    }
    
}

int main() {
    vector<int>arr = {1,2,-3,4,-5,6};
    int n = arr.size();
    moveAllNegative(arr,n);
    cout<<"Array after moving all negative elements to one side is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}