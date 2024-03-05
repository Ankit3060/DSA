#include <bits/stdc++.h>
using namespace std;

int peakElement(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s+(e-s)/2;
    }
    return arr[s];
}

int main() {
    vector<int> arr = {0,10,5,2};
    int ans = peakElement(arr);
    cout << "Peak element is: " << ans << endl;
    return 0;
}