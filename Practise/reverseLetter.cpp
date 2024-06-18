#include<bits/stdc++.h>
using namespace std;

string reverseLetter(string s){
  int l=0;
  int h=s.size()-1;
  while(l<h){
    if(isalpha(s[l]) && isalpha(s[h])){
      swap(s[l],s[h]);
      l++;
      h--;
    }
    else if(!isalpha(s[l])){
      l++;
    }
    else{
      h--;
    }
  }
  return s;
}

int main(){
  string s;
  cin>>s;
  string ans = reverseLetter(s);
  cout<<ans;
  return 0;
}