#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[10]="Ankit";
    char* c = ch;
    
    cout<<ch<<endl; // This will print the string
    cout<<&ch<<endl; // This will print the address of the string
    cout<<ch[0]<<endl; // This will print the first character of the string

    cout<<c<<endl; // This will print the string
    cout<<*c<<endl; // This will print the first character of the string
    cout<<&c<<endl; // This will print the address of the pointer

    //char print until null character
    char a='k';
    char* p = &a;
    cout<<p<<endl; // This will print the character until null character

    //Best practice to store string
    char name[10]="Ankit"; //This is best practice It store the string in stack memory
    cout<<name<<endl;
    char* n = "Ankit"; //This is bad practice It store the string in read only memory
    cout<<n<<endl;

    return 0;
}