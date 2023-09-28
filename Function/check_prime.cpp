// Here we are checking the particular number is prime or not
#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<<"Enter the value :"<<endl;
    cin>>n;
    cout<<"prime number from 1 to "<<n<<" is "<<endl;
    for(int i=1;i<=n;i++)
    {
        
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}