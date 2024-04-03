// This is longest palindromic substring problem from Leetcode
// eg. Input: s = "babad" -> Output: "bab"

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

string longestPalindromicSubstring(string s){
    string ans="";
    for(int i=0;i<s.length();i++){
        for(int j=i;j<=s.length();j++){
            if(isPalindrome(s,i,j)){
                string t = s.substr(i,j-i+1);
                ans = t.length()>ans.length()?t:ans;
            }
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<longestPalindromicSubstring(s)<<endl;
    return 0;
}