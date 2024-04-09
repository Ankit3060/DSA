// Reference variable mean having different name for same value.
// they have the same memory location if we update one theother one updated automatically

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int& b=a;  //This is reference variable syntax

    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<a<<endl;
    cout<<b<<endl;

    b++;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}