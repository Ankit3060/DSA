// This code is for reversing the stack
// Eg. Ankit=>tiknA

#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "Ankit";
    stack<char> s;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";
    while(!s.empty()){
        char ch = s.top();    //it will find the top value
        ans.push_back(ch);    //it will push that top value in string
        s.pop();
    }

    // cout<<s.top();
    // if(s.empty()){
    //     cout<<"empty";
    // }
    // else{
    //     cout<<"not";
    // }
    cout<<ans;
    return 0;
}