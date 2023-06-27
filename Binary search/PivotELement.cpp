#include<iostream>
using namespace std;

int pivotElement(int array[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    
    while (start < end)
    {
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int array[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    int answer = pivotElement(array, n);
    cout << "Pivot element is: " << array[answer] << endl;
    
    return 0;
}
