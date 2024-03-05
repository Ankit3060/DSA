// Missing element from array with duplicate elements
#include <bits/stdc++.h>
using namespace std;

void misingDuplicate(vector<int>&arr,int n){
    int i=0;
    while(i<n){
        if(arr[i]!=arr[arr[i]-1]){
            swap(arr[i],arr[arr[i]-1]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<"Missing element is : "<<i+1<<endl;
            cout<<"Duplicate element is : "<<arr[i]<<endl;
        }
    }
}

int main() {
    vector<int>arr = {2,3,3,1};
    int n = arr.size();
    misingDuplicate(arr,n);
    return 0;
}