#include<bits/stdc++.h>
using namespace std;

int ascii(char name){
    if(name>='a' && name<='z'){
        return name-32;
    }
    return name;
}

int main(){
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name,100);
    cout<<"Your name is: "<<name<<endl;
    cout<<"Your name in uppercase is: ";
    cout<<strupr(name)<<endl;
    
    cout<<"Your name in uppercase using ascii values is: ";
    for(int i=0;i<strlen(name);i++){
        cout<<(char)ascii(name[i]);
    }
    return 0;
}