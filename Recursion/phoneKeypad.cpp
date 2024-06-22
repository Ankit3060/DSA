// This is the code for generating all possible letter 
// combinations of a phone number using recursion
//Eg. Input: "23" -> Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
//This is leetcode problem 17 (letter combination)

#include<bits/stdc++.h>
using namespace std;

void solve(string digit,string output, int i, vector<string>& ans,string mapping[]){
    if(i>=digit.length()){
        ans.push_back(output);
        return;
    }

    int num = digit[i]-'0';
    string value = mapping[num];

    for(int j=0;j<value.length();j++){
        output.push_back(value[j]);
        solve(digit,output,i+1,ans,mapping);
        output.pop_back();
    }
}

vector<string>letterCombination(string digit){
    vector<string>ans;
    if(digit.length()==0){
        return ans;
    }
    string output;
    int i = 0;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    solve(digit,output,i,ans,mapping);
    return ans;
}

int main(){
    string digit;
    cin>>digit;
    vector<string>answer = letterCombination(digit);
    for(auto i:answer){
        cout<<i<<" ";
    }
    return 0;
}