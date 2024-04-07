#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5] = {11,22,23,34,45};
    cout<<sizeof(a)<<endl; // This will print the size of the array
    int* p = a;
    cout<<sizeof(p)<<endl; // This will print the size of the pointer
    cout<<sizeof(*p)<<endl; // This will print the size of the first element of the array
    return 0;
}