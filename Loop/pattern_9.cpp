// Inverted half pyramid with number
#include <iostream>
using namespace std;

int main() {
    int rowcount;
    cout<<"Enter the number of rows :";
    cin>>rowcount;
    for(int row=0;row<rowcount;row++)
    {
        for(int col=0;col<rowcount-row;col++)
        {
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}
