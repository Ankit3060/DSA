#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;

    // creating a pointer
    int* p = &a;

    // Accessing the value of a using pointer
    cout<< *p<<endl;

    // Accessing the address of a using pointer
    cout<< p<<endl;

    // Accessing the address of pointer
    cout<< &p<<endl;
    return 0;
}