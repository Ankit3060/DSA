// It is Selection Sort Example
// Selection Sort mean it will swap the higher array with lowest array  
#include<iostream>
using namespace  std;

void selectionSort(int array[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        if(array[j]<array[i])
        {
            int temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
    }
}

void printArray(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    selectionSort(array,n);
    cout<<"Sorted array is : ";
    printArray(array,n);
    return 0;
}

// Time Complexity = O(n^2)
