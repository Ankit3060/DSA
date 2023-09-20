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