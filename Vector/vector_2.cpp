#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value"<<endl;
    cin>>n;
    vector<int>brr(n,-10);
    cout<<"Size of array is "<<brr.size()<<endl;
    cout<<"Capacity of the array is "<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
    return 0;
}