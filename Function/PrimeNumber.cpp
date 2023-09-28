// Here we are checking the how many prime number are there between the given number
#include <iostream>
using namespace std;


bool primeNumber(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    for(int i=2;i<n/2;i++)
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
    if(primeNumber(n))
    {
        cout<<"It is prime "<<endl;
    }
    else{
        cout<<"It is not a prime "<<endl;
    }
    return 0;
}


// void primeNumber(int n)
// {
//     for(int i=2;i<=n/2;i++)
//     {
//         if(n==0 || n==1)
//         {
//             cout<<"It is not a prime number"<<endl;
//         }
//         else if(n%i==0)
//         {
//             cout<<"It is not a prime number"<<endl;
//             break;
//         }
//         else
//         {
//             cout<<"It is a prime number"<<endl;
//             break;
//         }
//     }      
//     cout<<endl;
// }

