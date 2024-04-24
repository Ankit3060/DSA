// This is the code for reversing a string using recursion
// eg. Input: "abcd" -> Output: "dcba"

#include<bits/stdc++.h>
using namespace std;

void reverseString(string& s, int start, int end){
    //Base case
    if(start >= end){
        return;
    }
    //Recursive case
    swap(s[start],s[end]);
    reverseString(s,start+1,end-1);
}

int main(){
    string s = "abcd";
    int start = 0;
    int end = s.size()-1;
    int i=0;
    reverseString(s,start,end);
    cout<<s<<endl;
    return 0;
}