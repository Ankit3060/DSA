#include <iostream>
using namespace std;

int main() {
    int arr[]={1,1,0,0,1,0,1,0,0,1,0,1,1,1,0};
    int size=15;
    int numZero = 0;
    int numOne = 0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]==0)
        {
            numZero++;
        }
        else if(arr[i]==1)
        {
            numOne++;
        }
    }
    cout<<"Total zeroes are :"<<numZero<<endl;
    cout<<"Total One are :"<<numOne<<endl;

    return 0;
}