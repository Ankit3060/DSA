#include<iostream>
using namespace std;

void linearSearch(int array[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
    {
        cout<<"It is found at"<<i<<endl;
    }
    }

}

int main()
{
    int n,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the key you want to search"<<endl;
    cin>>key;
    linearSearch(array,n,key);
    return 0;
}