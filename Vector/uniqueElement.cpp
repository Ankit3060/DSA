#include <iostream>
#include<vector>
using namespace std;

int uniqueElement(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the element in array "<<endl;
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
    int element = uniqueElement(arr);
    cout<<"Unique Element is : "<<element<<endl;
    return 0;
}