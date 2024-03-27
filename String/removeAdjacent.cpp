// Here we are removing the same string if occur more than one time
// eg. Input: s = "abbaca" -> Output: "ca"
#include<bits/stdc++.h>
using namespace std;

string removeAdjacent(string s){
    string str="";
    int i=0;
    while(i<s.length()){
        if(str.length()>0){
            if(str[str.length()-1] == s[i]){
                str.pop_back();
            }
            else{
                str.push_back(s[i]);
            }
        }
        else{
            str.push_back(s[i]);
        }
        i++;
    }
    return str;
}

int main(){
    string s="abbaca";
    cout<<removeAdjacent(s)<<endl;
    return 0;
}