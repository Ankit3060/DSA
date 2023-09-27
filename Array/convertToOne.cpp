#include <iostream>
using namespace std;

int main() {
    int arr[100],n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Converting the array and your array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        arr[i]=1;
    }
    cout<<endl;
    cout<<"Converted array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}