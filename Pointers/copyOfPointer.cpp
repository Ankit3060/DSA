#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int* p = &a; //address of a
    int* q = p; //copy of p (address of a)
    int* r = q; //cpy of q (address of a)

    // some operations
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<&q<<endl;
    cout<<r<<endl;
    cout<<*r<<endl;
    cout<<&r<<endl;
    cout<<(*p + *q + *r)<<endl;
    cout<<(*p)*2 + (*r)*3<<endl;
    return 0;
}