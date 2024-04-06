#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int* p = &a;
    //Operators in pointer
    cout<<a<<endl; // Value of a
    cout<<&a<<endl; // Address of a
    cout<<p<<endl; // Address of a
    cout<<*p<<endl; // Value of a
    cout<<&p<<endl; // Address of p
    cout<<p+1<<endl; // Address of a+1
    cout<<*(p+1)<<endl; // Value of a+1
    cout<<(*p)++<<endl; // Value of a+1
    cout<<(*p)/2<<endl; // Value of a/2
    

    return 0;
}