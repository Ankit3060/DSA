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

int main(){
    string haystack, needle;
    cin>>haystack>>needle;
    cout<<strStr(haystack,needle)<<endl;
    return 0;
}