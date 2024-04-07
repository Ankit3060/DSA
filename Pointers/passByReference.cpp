#include<bits/stdc++.h>
using namespace std;
void updatePtr(int* p){
    *p += 10;
}

int main(){
    int a=5;
    int* p = &a;
    cout<<"Value before update : "<<a<<endl;
    updatePtr(p);
    cout<<"Value after update : "<<a<<endl;
    return 0;
}