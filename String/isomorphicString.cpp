// This is Isomorphic Strings problem from Leetcode
// eg. Input: s = "egg", t = "add" -> Output: true
// eg. Input: s = "foo", t = "bar" -> Output: false

#include<bits/stdc++.h>
using namespace std;

bool isomorphic(string s, string t){
    if(s.length()!=t.length()){
        return false;
    }
    int hash[256]={0};
    bool isCharMapped[256]={0};
    for(int i=0;i<s.length();i++){
        if(hash[s[i]]==0 && isCharMapped[t[i]]==0){
            hash[s[i]] = t[i];
            isCharMapped[t[i]] = true;
        }
    }
    for(int i=0;i<s.length();i++){
        if(hash[s[i]] != t[i]){
            return false;
        }
    }
    return true;
}


int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    if(isomorphic(s,t)){
        cout<<"It is isomorphic"<<endl;
    }
    else{
        cout<<"It is not isomorphic"<<endl;
    }
    return 0;
}