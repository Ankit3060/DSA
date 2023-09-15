//  This is half pyramid code
#include <iostream>
using namespace std;

int main() {
    int rowCount , colCount;
    cout<<"Enter the row :";
    cin>>rowCount;
    for(int row=0;row<rowCount;row++)
    {
        for(int col=0;col<row+1;col++)
        {
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}