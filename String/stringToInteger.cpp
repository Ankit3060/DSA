// This is string to integer problem from Leetcode
// eg. Input: s = "42" -> Output: 42
// eg. Input: s = "   -42" -> Output: -42
// eg. Input: s = "4193 with words" -> Output: 4193

#include<bits/stdc++.h>
using namespace std;

//This is brute force approach
int Method1(string s){
    // int integer = atoi(s.c_str());
    int interger = stoi(s);
    return interger;
}

//This is optimized approach
int method2(string s){
    int num=0, i=0, sign=1;
    //Remove white spaces
    while(s[i]==' '){
        i++;
    }
    //Check for sign
    if(s[i]=='-'){
        sign = -1;
        i++;
    }
    else if(s[i]=='+'){
        i++;
    }
    //Check for digits
    while(i<s.length() && isdigit(s[i])){
        if(num>INT_MAX/10 || (num==INT_MAX/10 && s[i]-'0'>7)){
            if(sign==1){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }
        num = num*10 + (s[i]-'0');
        i++;
    }
    return num*sign;
}

int main(){
    string s;
    cin>>s;
    cout<<Method1(s)<<endl;
    cout<<method2(s)<<endl;
    return 0;
}