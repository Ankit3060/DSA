// This is a program to find the first non-repeating character in a stream of characters.
// Time complexity: O(n)
// Eg: Input: "aabc"
//     Output: "a#bb"

#include<bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string A){
    unordered_map<char,int>count;
    string ans = "";
    queue<int>q;

    for(int i=0;i<A.length();i++){
        char ch = A[i];

        //Count
        count[ch]++;

        //push in queue
        q.push(ch);

        //Checking repeating or not if yes then pop else push ans
        while(!q.empty()){
            if(count[q.front()]>1){
                q.pop();
            }else{
                ans.push_back(q.front());
                break;
            }
        }

        //checking if empty then push # in that place
        if(q.empty()){
            ans.push_back('#');
        }
    }
    return ans;
}

int main(){
    string input = "aabc";
    string result = FirstNonRepeating(input);

    cout << "First non-repeating characters sequence: " << result << endl;
    return 0;
}