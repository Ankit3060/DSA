#include<iostream>
using namespace std;
void insertionSort(int Array[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=Array[i];
        int j=i-1;
        while(Array[j]>current && j>=0)
        {
            Array[j+1]=Array[j];
            j--;
        }
    Array[j+1]=current;
    }
}

void printArray(int Array[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<Array[i]<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int Array[n];
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>Array[i];
    }

    insertionSort(Array,n);
    cout<<"the new order of array is"<<endl;
    printArray(Array,n);
    return 0;
}

//Time complexity = O(n^2)























/*void insertionSort(int n, vector<int> &arr){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}*/
