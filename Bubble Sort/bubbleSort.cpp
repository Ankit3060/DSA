#include<iostream>
using namespace std;
void bubbleSort(int Array[],int n)
{
	int counter=1; //here we are taking counter because we are running the program upto ith term
	while(counter<n)
	{
		for(int i=0;i<n-counter;i++)
		{
		if(Array[i]>Array[i+1])
		{
			int temp=Array[i];
			Array[i]=Array[i+1];
			Array[i+1]=temp;
		}
		}
		counter++;
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

	bubbleSort(Array,n);
	cout<<"arranged order of the array in bubble sort is "<<endl;
	printArray(Array,n);


}

//TIme complexity = O(n^2)

















