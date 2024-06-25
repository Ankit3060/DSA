// This is permutation of string means int his problem we are finding the
// all the possible that can be formed using the given string.
// Eg. [1,2,3] = [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
// This is leetcode problem 46
#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>nums, vector<vector<int>>& ans, int i){
    if(i>=nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int j=i;j<nums.size();j++){
        swap(nums[i],nums[j]);
        solve(nums,ans,i+1);
        //Backtracking
        swap(nums[i],nums[j]);
    }
}

vector<vector<int>> permute(vector<int>&nums){
    vector<vector<int>>ans;
    int i=0;
    solve(nums,ans,i);
    return ans;
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans = permute(nums);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}