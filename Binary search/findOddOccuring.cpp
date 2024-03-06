#include <bits/stdc++.h>
using namespace std;

int oddOccuring(vector<int>&arr){

    //Method1: Using XOR
    // int res=0;
    // for(int i=0;i<arr.size();i++){
    //     res = res^arr[i];
    // }
    // return res;

    //Method2: Using Binary Search
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<=e){

        if(s==e){
            return arr[s];  
        }
        
        else if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }
            else{
                e=mid;
            }
        }
        else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main() {
    vector<int>arr = {1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans = oddOccuring(arr);
    cout<<"Ans is :"<<ans<<endl;
    return 0;
}