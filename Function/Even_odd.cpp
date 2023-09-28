// Here we are finding the given number is even or odd based on number given by user
#include <iostream>
using namespace std;

void evenOdd(int n)
{
    if(n%2==0)
    {
        cout<<"It is even number"<<endl;
    }
    else{
        cout<<"it is odd number"<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    evenOdd(n);
    return 0;
}