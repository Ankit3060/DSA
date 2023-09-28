#include <iostream>
using namespace std;

void lineaSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"It is found at :"<<i;
        }
    }
    cout<<endl;
}

int main() {
    int arr[100],n,key;
    cout<<"Enter the size of the array :"<<endl;
    cin>>n;
    cout<<"Enter the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search :";
    cin>>key;

    lineaSearch(arr,n,key);

    return 0;
}