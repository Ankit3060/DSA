// Here we are finding the factorial of number factorial mean like factorial of 5 is 5*4*3*2*1=120
#include <iostream>
using namespace std;

void factorial(int n)
{
    long factorial=1.0;
    if(n<0)
    {
        cout<<"Factorial not possible"<<endl;
    }
    else {
        for(int i=1;i<=n;i++)
        {
            factorial *=i;
        }
        cout<<"factorial is "<<factorial;
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"Enter the value "<<endl;
    cin>>n;
    factorial(n);
    return 0;
}