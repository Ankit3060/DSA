// This is group anagram problem from leetcode
// eg. Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

#include<bits/stdc++.h>
using namespace std;

// This is method 1 using map sorting  T.C = O(nklogk)
vector<vector<string>> groupAnagramMethod1(vector<string>& strs){
    map<string,vector<string>> mp;
    for(auto str:strs){
        string s = str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }
    vector<vector<string>> ans;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}


// This is method 2 using hash T.C = O(nk)
std::array<int,256> hash(string s){
    std::array<int, 256>hash={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++; //hash[s[i]]++;
    }
    return hash;
}
vector<vector<string>> groupAnagramMethod2(vector<string>& strs){
    map<std::array<int,256>,vector<string>> mp;

    for(auto str:strs){
        mp[::hash(str)].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it=mp.begin(); it!=mp.end(); it++){
        ans.push_back(it->second);
    }
    return ans;
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagramMethod1(strs);
    cout<<"Method 1"<<endl;
    for(auto v:ans){
        for(auto s:v){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    vector<vector<string>> ans2 = groupAnagramMethod2(strs);
    cout<<"Method 2"<<endl;
    for(auto v:ans2){
        for(auto s:v){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}