#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int* p = &a; //address of a
    int** q = &p; //address of p

    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    return 0;
}