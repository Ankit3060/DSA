// This is longest word in dictionary through deleting problem from Leetcode
// eg. Input: s = "abpcplea", dictionary = ["ale","apple","monkey","plea"]
//  Output: "apple"  because apple is the longest word in dictionary which is subsequence of s

#include<bits/stdc++.h>
using namespace std;

bool isSubstring(string s, string word){
    int i=0;
    int j=0;
    while(i<s.length() && j<word.length()){
        if(s[i]==word[j]){
            j++;
        }
        i++;
    }
    return j==word.length();
}

string longestWord(string s, vector<string>& dictionary) {
    string longestWord="";
    for(string word: dictionary){
        if(isSubstring(s,word)){
            if(word.length()>longestWord.length() || (word.length()==longestWord.length() && word<longestWord)){
                longestWord = word;
            }
        }
    }
    return longestWord;
}

int main(){
    string s="abpcplea";
    vector<string> dictionary={"ale","apple","monkey","plea"};
    string ans = longestWord(s,dictionary);
    cout<<ans<<endl;
    return 0;
}