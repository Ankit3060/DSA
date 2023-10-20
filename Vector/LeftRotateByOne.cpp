#include <iostream>
#include <vector>
using namespace std;

void RotateByOne(vector<int>& arr)
{
    int temp = arr[0];
    for(int i = 0; i < arr.size() - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[arr.size() - 1] = temp;
}

int main() {
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int> arr(n);

    cout<<"Enter the array :"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }

    RotateByOne(arr);

    cout << "Array after left rotation by one element: ";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

