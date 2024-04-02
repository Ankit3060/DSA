// This is longest common prefix problem from Leetcode
// eg. Input: strs = ["flower","flow","flight"] -> Output: "fl"

#include<bits/stdc++.h>
using namespace std;

string longestCommon(vector<string>strs){
    sort(strs.begin(),strs.end());
    string ans = "";
    int n = strs.size();
    string u = strs[0];
    string v = strs[n-1];
    for(int i=0;i<u.size();i++){
        if(u[i] == v[i]){
            ans += u[i];
        }
        else{
            break;
        }
    }
    return ans;
}

int main(){
    vector<string>strs;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        strs.push_back(s);
    }
    string ans = longestCommon(strs);
    cout<<ans;
    return 0;
}