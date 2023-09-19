#include <iostream>
using namespace std;

void printCounting(int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<i<<endl;;
    }
    cout<<endl;;
}

int main() {
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    printCounting(n);
    // cout<<"Counting series is :",printCounting(n);
    // cout<<endl;
    return 0;
}