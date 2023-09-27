// Memset() is a C++ function. It copies a single character for a specified number of times to an object.
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	int arr[5] = {1,2,3,4,5};
    int value=1;
	memset(arr, value, sizeof(arr));
	for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
