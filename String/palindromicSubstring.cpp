// This is a program to find the number of palindromic substrings in a given string.
// Example: Input: s = "abc" -> Output: 3
// It is brute force approach. Time complexity is O(n^3)

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    int i=0;
    int j=str.size()-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int palindromicSubstring(string s){
    int count=0;
    for(int i=0;i<s.length();i++){
        for(int j=1;j<=s.length()-i;j++){
            string subStr = s.substr(i,j);
            if(isPalindrome(subStr)){
                count++;
            }
        }
    }
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<palindromicSubstring(s)<<endl;
    return 0;
}