#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>crr{10,20,30,40};

    crr.push_back(50);

    cout<<"Size is "<<crr.size()<<endl;
    cout<<"Capacity is "<<crr.capacity()<<endl;

    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
    cout<<endl;

    cout<<"Is empty :"<<crr.empty()<<endl;

    return 0;
}