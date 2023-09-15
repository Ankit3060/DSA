// This is Holllow Sphere pattern
#include <iostream>
using namespace std;

int main() {
    int rowCount , colCount;
    cout<<"Enter the number of rows :";
    cin>>rowCount;
    cout<<"Enter the number of columns :";
    cin>>colCount;
    for(int row=0; row<rowCount ;row++)
    {
        if(row==0 || row==rowCount-1)
        {
            for(int col=0 ;col<colCount;col++)
            {
                cout<<"*";
            }
        }
        else{
             cout<<"*";
            for(int i=0;i<colCount-2;i++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}