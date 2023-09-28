#include <iostream>
#include<cmath>
#include <limits.h>

using namespace std;

int main() {
    int arr[]={5,1,7,10,6,9,15};
    int max=INT_MIN;
    int size=7;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum number is :"<<max<<endl;

    return 0;
}