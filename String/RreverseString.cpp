#include <bits/stdc++.h>
using namespace std;

int twoPtrs(char name[]){
    int i=0;
    int j=strlen(name)-1;
    while(i<=j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}

int main() {
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name,100);
    cout<<"Your name is: "<<name<<endl;
    cout<<"Your name in reverse is: ";

    for(int i=strlen(name)-1;i>=0;i--){
        cout<<name[i];
    }
    
    cout<<endl;
    twoPtrs(name);
    cout<<name<<endl;
    return 0;
}