#include<bits/stdc++.h>
using namespace std;

bool alienDict(vector<string>word, string order){
    map<char,int> alien;
    for(int i=0;i<order.size();i++){
        alien[order[i]]='a'+i;
    }

    for(int i=0;i<word.size();i++){
        for(int j=0;j<word[i].size();j++){
            word[i][j] == alien[word[i][j]];
        }
    }

    return is_sorted(word.begin(), word.end());
}

int main(){
    vector<string> word = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    if(alienDict(word,order)){
        cout<<"true";
    }
    else{
        cout<<"False";
    }
    return 0;
}