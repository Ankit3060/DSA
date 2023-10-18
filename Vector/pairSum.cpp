// here we area making sum with the help of 2 number
// eg: {1,3,5,4,6,7} sum=9 ans: [3,6] [5,4]

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>arr{1,3,5,4,6,7};
    int sum = 9;
    int count=0;

    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+ arr[j]==sum)
            {
                cout<<arr[i]<<" , " <<arr[j]<<endl;;
            }
        }
    }

    return 0;
}