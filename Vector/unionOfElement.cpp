#include <iostream>
#include<vector>
using namespace std;

int main() {
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb = 4;

    vector<int>array;
    
    for(int i=0;i<sizea;i++)
    {
        array.push_back(arr[i]);
    }

    for(int i=0;i<sizeb;i++)
    {
        array.push_back(brr[i]);
    }

    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }

    cout<<endl;
    
    return 0;
}