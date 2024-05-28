#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {3,3,4,2,4,4,2,4,4};
    int n = arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            cout<<it.first;
        }
    }
    return 0;
}