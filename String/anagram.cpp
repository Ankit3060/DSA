// Anagram mean two string have same character but in different order
// eg. s="listen" t="silent" -> both are anagram

#include<bits/stdc++.h>
using namespace std;

bool method1(string s, string t){
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        return true;
    }
    return false;
}

bool method2(string s, string t){
    if(s.length()!=t.length()){
        return false;
    }
    int count[256]={0};
    for(int i=0;i<s.length();i++){
        count[s[i]]++;
        count[t[i]]--;
    }
    for(int i=0;i<256;i++){
        if(count[i]!=0){
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
    // method1  TC: O(nlogn)
    if(method1(s,t)){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not anagram"<<endl;
    }

    // method2
    if(method2(s,t)){
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not anagram"<<endl;
    }

    return 0;
}