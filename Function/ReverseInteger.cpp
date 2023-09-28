// Here we are reversing the number like 1,2,3 is 3,2,1
#include <iostream>
using namespace std;

int Reverse(int n)
{
    int reverse =0;
    int remainder;
    while(n !=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n=n/10;
    }
    return reverse;
}

int main() {
    int n;
    cout<<"Enter the value :"<<endl;
    cin>>n;
    int answer= Reverse(n);
    cout<<answer<<endl;
    return 0;
}


