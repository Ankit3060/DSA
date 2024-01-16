// This is pascal traingle type 1 
// Here we are finding the particular element on that row and col 
// Eg : r=5 c=3 ans=6
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

int NcR(int c,int r)
{
    long long res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(c-i);
        res=res/(i+1);
    }
    return res;
}

int pascalTriangle(int r,int c)
{
    int element = NcR(r-1,c-1);
    return element;
}

int main() {
    int r=5;
    int c=3;
    int answer=pascalTriangle(r,c);
    cout<<"The answer is "<<answer<<endl;
    return 0;
}