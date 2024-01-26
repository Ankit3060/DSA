#include <bits/stdc++.h>
using namespace std;

vector<int> rotate(vector<int>& arr,int n, int d){
    d=d%n;
    
    //Method 1 brute force

    // int temp[d];
    // for(int i=0;i<d;i++)
    // {
    //     temp[i]=arr[i];
    // }
    // for(int i=d;i<n;i++)
    // {
    //     arr[i-d]=arr[i];
    // }
    // for(int i=n-d;i<n;i++)
    // {
    //     arr[i]=temp[i-n+d];
    // }

    //Method 2 using reverse
    
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.end());

    return arr;
}

int main() {
    int n,d;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the number of rotations"<<endl;
    cin>>d;
    vector<int> arr(n);
    cout<<"Enter the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   vector<int> ans = rotate(arr,n,d);

    cout<<"The rotated array is"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}