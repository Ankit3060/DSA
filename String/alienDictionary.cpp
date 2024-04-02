// This is Alien Dictionary problem from Leetcode
// eg. Input: words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz" -> Output: True

#include<bits/stdc++.h>
using namespace std;

bool Aliendict(vector<string> words, string order){
    map<char,int> alienDict;   //We can use here unordered_map also
    for(int i=0;i<order.size();i++){
        alienDict[order[i]] = 'a'+i;
    }

    for(int i=0;i<words.size();i++){
        for(int j=0;j<words[i].size();j++){
            words[i][j] = alienDict[words[i][j]];
        }
    }

    return is_sorted(words.begin(),words.end());
}

int main(){
    vector<string> words = {"hello","leetcode"};
    string order = "hlabcdefgijkmnopqrstuvwxyz";
    if (Aliendict(words, order)) {
        cout << "Yes it in alien alphabet." << endl;
    } else {
        cout << "No it is not in alien alphabet." << endl;
    }

    return 0;
}