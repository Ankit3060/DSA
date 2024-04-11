#include<bits/stdc++.h>
using namespace std;

void arrayRecursion(int arr[], int n, int i){
    if(i>=n){
        return;
    }
    arrayRecursion(arr,n,i+1);
    cout<<arr[i]<<" ";
}

int main(){
    int arr[5]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=0;
    arrayRecursion(arr,n,i);
    return 0;
}