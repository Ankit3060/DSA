#include<bits/stdc++.h>
using namespace std;

void maxElement(int arr[], int n, int& maxi, int i){
    if(i>=n)
    return;
    if(arr[i]>maxi){
        maxi = arr[i];
    }
    maxElement(arr,n,maxi,i+1);
}

void minElement(int arr[], int n, int& mini, int i){
    if(i>=n)
    return;
    mini = min(mini,arr[i]);
    minElement(arr,n,mini,i+1);
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i=0;
    maxElement(arr,n,maxi,i);
    cout<<"Maximum element in the array is : "<<maxi;
    minElement(arr,n,mini,i);
    cout<<"\nMinimum element in the array is : "<<mini;
    return 0;
}