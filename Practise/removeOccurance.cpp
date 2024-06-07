#include<bits/stdc++.h>
using namespace std;
string removeOccurance(string s, string target){
    int pos = s.find(target);
    while(pos != string::npos){
        s.erase(pos,target.length());
        pos = s.find(target);
    }
    return s;
}
int main(){
    string s="axxxxyyyyb";
    string target ="xy";
    cout<<removeOccurance(s,target);
    return 0;
}