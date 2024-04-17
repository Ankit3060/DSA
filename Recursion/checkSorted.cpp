#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int>& arr, int& n, int i){
    if(i == n-1){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    bool ans = checkSorted(arr,n,i+1);
    return ans;
}

int main(){
    vector<int>arr = {1,20,3,4,5};
    int n = arr.size();
    int i=0;
    bool ans = checkSorted(arr,n,i);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}