#include <bits/stdc++.h>
using namespace std;

int replaceSpace(char name[]){
    int n= strlen(name);
    for(int i=0;i<n;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
}

int main() {
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name,100);
    cout<<"Your name is: "<<name<<endl;
    replaceSpace(name);
    cout<<"Your name after replacing spaces with '@' is: "<<name<<endl;
    
    return 0;
}