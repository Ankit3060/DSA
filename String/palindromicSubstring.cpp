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

// Leet code solution
// time complexity O(n^2)

// int expandingIndex(string s,int i, int j){
//     int count=0;
//     while(i>=0 && j<s.length() && s[i]==s[j]){
//         count++;
//         i--;
//         j++;
//     }
//     return count;
// }

// int countSubstrings(string s) {
//     int count=0;
//     for(int i=0;i<s.length();i++){
//         int oddAns = expandingIndex(s,i,i);
//         count += oddAns;

//         //Even
//         int evenAns = expandingIndex(s,i,i+1);
//         count += evenAns;
//     }
//     return count;
// }