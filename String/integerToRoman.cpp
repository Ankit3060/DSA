//This is a program to convert an integer to a roman numeral.
//eg. Input: 3 -> Output: "III"
//eg. Input: 1994 -> Output: "MCMXCIV"

#include<bits/stdc++.h>
using namespace std;

//This is Array solution
string intToRoman1(int num) {
    string roman[]={
        "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"
    };
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string ans="";
    for(int i=0;i<13;i++){
        while(num >= values[i]){
            ans += roman[i];
            num -= values[i];
        }
    }
    return ans;
}

//This is Map solution
string intToRoman2(int num) {
    map<int, string> romanNum = {
        {1000, "M"},
        {900, "CM"},
        {500, "D"},
        {400, "CD"},
        {100, "C"},
        {90, "XC"},
        {50, "L"},
        {40, "XL"},
        {10, "X"},
        {9, "IX"},
        {5, "V"},
        {4, "IV"},
        {1, "I"}
    };
    string ans="";
    for(auto it = romanNum.rbegin(); it != romanNum.rend(); ++it){
        while(num >= it->first){
            ans += it->second;
            num -= it->first;
        }
    }
    return ans;
}


int main(){
    int num;
    cin>>num;
    cout<<intToRoman1(num)<<endl;
    cout<<intToRoman2(num)<<endl;
    return 0;
}