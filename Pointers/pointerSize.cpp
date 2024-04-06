#include<bits/stdc++.h>
using namespace std;
int main(){
    // Pointer always store same size of memory irrespective of the data type
    // int
    int a=5;
    int* p = &a;
    cout<<sizeof(p)<<endl;

    // char
    char c = 'a';
    char* pc = &c;
    cout<<sizeof(pc)<<endl;

    //double
    double d = 5.5;
    double* pd = &d;
    cout<<sizeof(pd)<<endl;
    return 0;
}