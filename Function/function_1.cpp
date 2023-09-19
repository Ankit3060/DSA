#include <iostream>
using namespace std;
void printName(int n)
{
    // int n;
    for(int i=0;i<n;i++)
    {
        cout<<"Ankit"<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    printName(n);
    return 0;
}