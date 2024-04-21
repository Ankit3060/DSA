#include<bits/stdc++.h>
using namespace std;

int BS(vector<int>&arr, int& s, int& e,int& key){
    //Base case
    if(s>e){
        return -1;
    }

    //Finding the mid values
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        e = mid-1;
        return BS(arr,s,e,key);
    }
    else{
        s = mid+1;
        return BS(arr,s,e,key);
    }

    //using ternary operator
    // return arr[mid]>key ? BS(arr,s,mid-1,key) : BS(arr,mid+1,e,key);
}

int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9,10};
    int n = arr.size();
    int key = 5;
    int s=0;
    int e=n-1;
    int ans = BS(arr,s,e,key);
    cout<<"Index of "<<key<<" is : "<<ans<<endl;
    return 0;
}