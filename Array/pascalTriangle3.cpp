
// This is pascal traingle type 3
// Here we are finding the particular element on that row and col 
// Eg : n=5 ans=belo
/*
 1
 1 1
 1 2 1
 1 3 3 1
 1 4 6 4 1
 1 5 10 10 5 1
 1 6 15 20 15 6 1
*/

#include <bits/stdc++.h>
using namespace std;

void pascalTriangle(int n)
{
    for(int row=1;row<=n;row++)
    {
        long long ans=1;
        cout<<ans<<" ";

        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n=5;
    pascalTriangle(n);
    return 0;
}