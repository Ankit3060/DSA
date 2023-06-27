#include<iostream>
using namespace std;

int peakElement(int array[],int n)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<end)
    {
        if(array[mid]<array[mid+1])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=(start+end)/2;
    }
    return start;
}

int main()
{
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int answer=peakElement(array,n);
    cout<<"The peak element is at index "<<answer<<endl;

}