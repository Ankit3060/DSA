#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        int start=1;
        for(int k=0;k<2*i+1;k++)
        {
            if(i==0 || i==n-1)
            {
                if(k%2==0)
                {
                    cout<<start;
                    start++;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(k==0)
                {
                    cout<<1;
                }
                else if(k==2*i){
                    cout<<i+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}