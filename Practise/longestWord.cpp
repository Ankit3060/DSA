#include<bits/stdc++.h>
using namespace std;

bool checklong(string s, string word){
    int i=0;
    int j=0;
    while(i<s.size() && j<word.size()){
        if(s[i]==word[j]){
            j++;
        }
        i++;
    }
    return j==word.length();
}

string longWord(string s, vector<string>dict){
    string longsword = "";
    for(string word:dict){
        if(checklong(s,word)){
            if(word.length()>longsword.length()||word.length() == longsword.length() && word<longsword){
                longsword = word;
            }
        }
    }
    return longsword;
}

int main(){
    string s = "abpcplea";
    vector<string> dict = {"apple","plea","ale","monkey"};
    string ans = longWord(s,dict);
    cout<<ans;
    return 0;
}
