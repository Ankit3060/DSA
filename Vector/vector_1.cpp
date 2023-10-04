#include <iostream>
#include<vector>
using namespace std;

int main() {
    // Creating a vector
    vector<int>arr;

    // This is compiler dependent stuff 
    int ans=sizeof(arr)/sizeof(int);
    cout<<ans<<endl;

    // Checking the size of the array
    cout<<arr.size()<<endl;          // How much is stores
    cout<<arr.capacity()<<endl;      // How much we can store

    // Inserting the number in array
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);

    // Printing the array
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    // Removing the array
    arr.pop_back();
    arr.pop_back();

    cout<<"After removing the array"<<endl;
    
    // Printing the array
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}