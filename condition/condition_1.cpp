#include <iostream>
using namespace std;

int main() {
    int marks;
    cout<<"Enter your marks : "<<endl;
    cin>>marks;
    if(marks>=90)
    {
        cout<<"A grade"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"B grade"<<endl;
    }
    else if(marks>=60)
    {
        cout<<"C grade"<<endl;
    }
    else{
        cout<<"Fail";
    }
    return 0;
}