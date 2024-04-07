#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] = {11,22,23,34,45};
    cout<<a<<endl; // This will print the address of the first element of the array
    cout<<&a<<endl; // This will print the address of the array
    cout<<a[0]<<endl; // This will print the value of the first element of the array
    cout<<&a[0]<<endl; // This will print the address of the first element of the array
    cout<<&a[1]<<endl; // This will print the address of the second element of the array

    int* p = a;
    cout<<p<<endl; // This will print the address of the first element of the array
    cout<<*p<<endl; // This will print the value of the first element of the array
    cout<<&p<<endl; // This will print the address of the pointer

    cout<<*p+1<<endl; // This will print the value of the first element of the array + 1
    cout<<*(p)+1<<endl; // This will print the value of the second element of the array
    cout<<*(p+1)<<endl; // This will print the value of the second element of the array

    int i=0;
    cout<<a[i]<<endl; // This will print the value of the first element of the array
    cout<<*(a+i)<<endl; // This will print the value of the first element of the array
    cout<<i[a]<<endl; // This will print the value of the first element of the array
    cout<<*(i+a)<<endl; // This will print the value of the first element of the array
    return 0;
}