#include<bits/stdc++.h>
using namespace std;
set<pair<int, int>> kbs(vector<int>&arr,int k){
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
int main(){
    vector<int>arr={3,1,4,1,5};
    int k=2;
     set<pair<int, int>> pairs = kbs(arr, k);
    cout << "Pairs with difference " << k << ":" << endl;
    for (auto pair : pairs) {
        cout << "(" << pair.first << ", " << pair.second << ")" << endl;
    }
    return 0;
}