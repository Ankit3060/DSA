#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&arr){
    map<int ,int>mp;
    for(int i=0;i<arr.size();i++)
    {
        mp[arr[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>arr.size()/2)
        {
            return it.first;
        }
    }
    return -1;
}

int main() {
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int ans = majorityElement(arr);
    cout<<"The majority elements are :" << ans << endl;

    return 0;
}