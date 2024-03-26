#include<bits/stdc++.h>
using namespace std;

int ascii(char name){
    if(name<='A' && name>='Z'){
        return name+32;
    }
    return name;
}

int main(){
    char name[100];
    cout<<"Enter your name"<<endl;
    cin.getline(name,100);

    cout<<"Your name lower case is: ";
    cout<<strlwr(name)<<endl;;

    cout<<"Your name in lower case using ASCII value is : ";
    for(int i=0;i<strlen(name);i++){
        cout<<(char)ascii(name[i]);
    }
    return 0;
}