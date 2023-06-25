#include<iostream>
using namespace std;
int binarySearch(int array[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(array[mid]==key)
        {
            return mid;
        }
        if(key>array[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int n,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    int answer=binarySearch(array,n,key);
    cout<<"It is found at :"<<answer<<endl;
    return 0;

}