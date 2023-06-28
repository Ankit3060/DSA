//Example5 in this Example we are finding the Element in the sorted and roted array like A[7 8 9 1 2]
#include<iostream>
using namespace std;

int pivotElement(int array[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = (s + e) / 2;
    
    while (s < e)
    {
        if (array[mid] >= array[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = (s + e) / 2;
    }
    return s;
}

int binarySearch(int array[],int s,int e, int key)
{
    int start=s;
    int end=e;
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

int findPosition(int array[], int n, int k)
{
    int pivot = pivotElement(array, n);
    if( k >= array[pivot] && k <= array[n-1])
    {
        return binarySearch(array, pivot, n-1, k);
    }
    else
    {
        return binarySearch(array, 0, pivot - 1, k);
    }
    
}
int main()
{
    int n,key;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;
    cout<<"It is found at index : "<<findPosition(array,n,key)<<endl;
    return 0;
}