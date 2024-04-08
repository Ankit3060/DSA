#include<bits/stdc++.h>
using namespace std;

void solve(int** q){
    **q += 1;
}

int main(){
    int a=5;
    int* p = &a; //address of a
    int** q = &p; //address of p

    solve(q);
    cout<<a<<endl;
    return 0;
}