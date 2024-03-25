// Here we are taking the input of the name in a loop and printing the value of the name at each index.
// eg. name = "Ankit" => index 0 Value : A ... index 4 Value : t
// Note:- By default a null character is added at the end of the string.

#include <bits/stdc++.h>
using namespace std;

int main() {
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;

    for(int i=0;i<6;i++){
        cout<<"index "<<i<<"Value : "<<name[i]<<endl;
    }

    int value = (int)name[5];
    cout<<"Value is :"<<value<<endl;
    return 0;
}