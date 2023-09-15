//  This is half pyramid code with numbers
#include <iostream>
using namespace std;

int main() {
    int rowCount;
    cout<<"Enter the row:";
    cin>>rowCount;
    for(int row=0;row<rowCount;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<col+1;
        }
        cout<<endl;
    }
    return 0;
}