#include<bits/stdc++.h>
using namespace std;

bool isIso(string s,string t){
    if(s.size() != t.size()){
        return false;
    }

    int hash[256]={0};
    bool isCharMapped[256]={0};
    for(int i=0;i<s.size();i++){
        if(hash[s[i]]==0 && isCharMapped[t[i]]==0){
            hash[s[i]]=t[i];
            isCharMapped[t[i]] = true;
        }
    }
    for(int i=0;i<s.size();i++){
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
    if(isIso(s,t)){
        cout<<"Isomorphic"<<endl;
    }
    else{
        cout<<"Not Isomorphic"<<endl;
    }
    return 0;
}