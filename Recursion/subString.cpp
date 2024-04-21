// This is the code for printing all the subsequence of a string
// eg. Input: "abc" -> Output: "","a","b","c","ab","ac","bc","abc"

#include<bits/stdc++.h>
using namespace std;

void printSubSequence(string str, string output, int i){
    //Base case
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    //Recursive case
    //Exclude
    printSubSequence(str,output,i+1);
    //Include
    output.push_back(str[i]);
    printSubSequence(str,output,i+1);
    //Include can also be written as:
    // output += str[i]; 
    // printSubSequence(str,output,i+1);
    // printSubSequence(str,output+str[i],i+1);
}

int main(){
    string str = "abc";
    string output = "";
    int i=0;
    printSubSequence(str,output,i);
    return 0;
}