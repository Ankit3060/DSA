// here we area making sum with the help of 3 number
// eg: {10,20,30,40,50} sum=80 ans: [10,20,50] [10,30,40]

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<int>arr{10,20,30,40,50};
    int sum = 80;
    int count=0;
    
    cout<<"triple number that has sum : "<<sum<<endl;
    
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                if(arr[i]+ arr[j] + arr[k] == sum)
                {
                    cout<<arr[i]<<" ," <<arr[j]<< ", "<<arr[k]<<endl;;
                }
            }
        }
    }

    return 0;
}