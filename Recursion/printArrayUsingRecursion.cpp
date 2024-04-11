#include<bits/stdc++.h>
using namespace std;

void arrayRecursion(int arr[], int n, int i){
    if(i>=n){
        return;
    }
    cout<<arr[i]<<" ";
    arrayRecursion(arr,n,i+1);
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    arrayRecursion(arr,n,i);
    return 0;
}