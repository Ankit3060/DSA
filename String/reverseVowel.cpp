// This is reverse vowel problem
// eg. Input: s = "hello" -> Output: "holle"

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);
    return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
}

string vowel(string s){
    int l=0;
    int h=s.size()-1;
    while(l<h){
        if(isVowel(s[l]) && isVowel(s[h])){
            swap(s[l],s[h]);
            l++;
            h--;
        }
        else if(!isVowel(s[l])){
            l++;
        }
        else{
            h--;
        }
    }
    return s;
}

int main(){
    string s;
    cin>>s;
    string ans = vowel(s);
    cout<<ans;
    return 0;
}