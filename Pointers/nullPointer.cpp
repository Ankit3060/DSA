#include<bits/stdc++.h>
using namespace std;
int main(){
    // It will give segmentation fault as we are trying to access the value at the address which is not allocated to.
    int* ptr;
    cout<< *ptr<<endl;

    // To represent null pointer we can use nullptr
    int* ptr1 = nullptr;
    cout<< *ptr1<<endl;
    return 0;
}