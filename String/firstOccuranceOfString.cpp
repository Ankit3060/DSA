// This is first occurance of string problem from Leetcode
// eg. Input: haystack = "hello", needle = "ll" -> Output: 2

#include<bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
    for(int i=0;i<=n-m;i++){
        for(int j=0;j<m;j++){
            if(haystack[i+j]!=needle[j]){
                break;
            }
            if(j==m-1){
                return i;
            }
        }
    }
    return -1;
}

//This is brute force approach
int method2(string haystack, string needle){
    for(int i=0;i<haystack.length();i++){
        for(int j=0;j<haystack.length();j++){
            string ans = haystack.substr(i,j-i+1);
            if(ans==needle){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string haystack, needle;
    cin>>haystack>>needle;
    cout<<strStr(haystack,needle)<<endl;
    cout<<method2(haystack,needle)<<endl;
    return 0;
}