#include<bits/stdc++.h>
using namespace std;

void passByReference(int* &p){
    *p += 10;
}

void passByValue(int* p){
    p += 1;
}

int main(){
    int a=5;
    int* p = &a; 

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    //pass by reference
    cout<<"Pass by reference"<<endl;
    passByReference(p);
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    //pass by value
    cout<<"Pass by value"<<endl;
    passByValue(p);
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;


    return 0;
}