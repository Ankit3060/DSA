// int  this quesion is to print all the substring of a string
// eg. Input: s = "Hello" -> Output: H, e, l, l, o, He, el, ll, lo, Hel, ell, llo, Hell, ello, Hello 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="Hello";
    for(int i=0;i<s1.length();i++){
        for(int j=1;j<=s1.length()-i;j++){
            cout<<s1.substr(i,j)<<endl;
        }
    }
    return 0;
}