#include<iostream>
using namespace std;
int firstOccurance(int array[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(array[mid]==key)
        {
            ans = mid;
            end = mid-1;
        }
        // To go on right 
        else if(array[mid]<key)
        {
            start = mid+1;
        }
        // To go on left 
        else if(array[mid]>key)
        {
            end = mid-1; 
        }
        mid=(start+end)/2;
    }
    return ans;
}

int lastOccurance(int array[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    int ans=-1;
    while(start<=end)
    {
        if(array[mid]==key)
        {
            ans = mid;
            start = mid+1;
        }
        // To go on right 
        else if(array[mid]<key)
        {
            start = mid+1;
        }
        // To go on left 
        else if(array[mid]>key)
        {
            end = mid-1; 
        }
        mid=(start+end)/2;
    }
    return ans;
}

int main()
{
    int n,key;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"enter the element you want to search"<<endl;
    cin>>key;
    int First=firstOccurance(array,n,key);
    int Last=lastOccurance(array,n,key);
    cout<<"First index of the element "<<key<<" is at : "<<First<<endl;
    cout<<"Last index of the element "<<key<<" is at : "<<Last<<endl;
    
    return 0;

}