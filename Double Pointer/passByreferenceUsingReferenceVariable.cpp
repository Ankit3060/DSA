#include<bits/stdc++.h>
using namespace std;

//This is pass by value
// void solve(int val){
//     val++;
// }

//This is pass by reference
void solve(int& val){
    val++;
}

int main(){
    int a=5;
    int& b=a;
    cout<<a<<endl;
    cout<<b<<endl;

    solve(a);
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}