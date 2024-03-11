// K diff problem means we have to find the pairs of elements in the array whose difference is equal to k.
// eg. {3,1,4,1,5} k=2 => (1,3),(4,3),(5,3)

#include <bits/stdc++.h>
using namespace std;

set<pair<int, int>>  kdiff(vector<int>&arr,int k){
    sort(arr.begin(),arr.end());
    int i=0;
    int j=1;
    set<pair<int,int>>ans;
    while(j<arr.size()){
        int diff = arr[j]-arr[i];
        if(diff==k){
            ans.insert({arr[i],arr[j]});
            i++;
            j++;
        }
        else if(diff<k){
            j++;
        }
        else{
            i++;
        }
    }
    return ans;
}

int main() {
    vector<int>arr = {3,1,4,1,5};
    int k = 2;
    // int ans = kdiff(arr,k);
    // cout<<ans<<endl;
    set<pair<int, int>> pairs = kdiff(arr, k);
    cout << "Pairs with difference " << k << ":" << endl;
    for (auto pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}