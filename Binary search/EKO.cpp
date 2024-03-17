// This is a problem from SPOJ. here we have to find the maximum height of the blade such that we can collect the required amount of wood.
// Eg. trees=[20,15,10,17], m=7 => maxBlade(trees,m)=15
// https://www.spoj.com/problems/EKO/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<long long int> trees,long long int mid,long long int m){
    long long int woodCollected=0;
    for(long long int i=0;i<trees.size();i++){
        if(trees[i]>mid){
            woodCollected+=trees[i]-mid;
        }
    }
    return woodCollected>=m;
}

long long int maxBlade(vector<long long int> trees,long long int m){
    long long int start=0;
    long long int end;
    end=*max_element(trees.begin(),trees.end());
    long long int ans=-1;
    while(start<=end){
        long long int mid=start+(end-start)/2;
        if(isPossible(trees,mid,m)){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}

int main() {
    long long int n,m;
    cout<<"Enter the number of trees and the required wood: ";
    cin>>n>>m;
    vector<long long int> trees;
    cout<<"Enter the height of the trees: ";
    for(long long int i=0;i<n;i++){
        long long int height;
        cin>>height;
        trees.push_back(height);
    }
    sort(trees.begin(),trees.end(),greater<long long int>());
    cout<<maxBlade(trees,m)<<endl;
    return 0;
}
