#include <iostream>
#include<cmath>
#include <limits.h>

using namespace std;

int main() {
    int arr[]={5,1,7,10,6,9,15};
    int min=INT_MAX;
    int size=7;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum number is :"<<min<<endl;

    return 0;
}