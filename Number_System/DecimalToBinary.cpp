// Divison Method
#include <iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n)
{
    int binaryno = 0;
    int i=0;
    while(n>0)
    {
        int bit = n%2;
        binaryno = bit*pow(10,i++)+binaryno;
        n=n/2;
    }
    return binaryno;
}

int main() {
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<binary<<endl;
    return 0;
}