#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(char ch[]){
    int n= strlen(ch);
    int i=0;
    int j=n-1;
    while(i<j){
        if(ch[i]!=ch[j]){
            cout<<"Not a palindrome"<<endl;
            return false;
        }
        i++;
        j--;
    }
    cout<<"Palindrome"<<endl;
    return true;
}

int main() {
    char ch[100];
    cout<<"Enter a string: ";
    cin>>ch;
    isPalindrome(ch);    
    return 0;
}

// Time complexity O(n)
// Space complexity O(1)


// Leetcode solution
// bool isPalindrome(int x) {
//     if (x < 0) {
//     return false;
//     }
//     string numStr = to_string(x);
//     int i = 0;
//     int j = numStr.length() - 1;
//     while(i<j){
//         if(numStr[i] != numStr[j]){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }