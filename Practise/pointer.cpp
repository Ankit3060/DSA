#include <iostream>
using namespace std;

void updatePtr(int *p){
    int a = 10;
    p=&a;
    *p=(*p) * (*p);
}

void until(int &a){
    a += 1;
}

int main()
{
    // int a = 12;
    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&a<<endl;
    
    // cout<<"Pass by value"<<endl;
    // updatePtr(a);
    // cout<<a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&a<<endl;
    
    // int a=12;
    // int *p=&a;
    // int **q=&p;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<q<<endl;
    // cout<<&a<<endl;
    // cout<<&p<<endl;
    // cout<<&q<<endl;
    // cout<<*p<<endl;
    // cout<<**q<<endl;
    // cout<<a<<endl;
    
    int a=10;
    updatePtr(&a);
    cout<<a<<endl;
    
    until(a);
    cout<<a;
    
    
    
    return 0;
}