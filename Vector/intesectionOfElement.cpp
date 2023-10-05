#include <iostream>
#include<vector>
using namespace std;

int main() {

    vector<int>arr{1,2,5,9};
    vector<int>brr{2,5,6,8};

    vector<int>ans;

    for(int i=0;i<arr.size();i++)
    {
        int element = arr[i];
        for(int j=0;j<brr.size();j++)
        {
            if(element==brr[j])
            {
                // mark the element
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }

    for(auto value : ans)
    {
        cout<<value<<" ";
    }
    cout<<endl;

    return 0;
}