#include <iostream>
using namespace std;

void addition(int a, int b){
    cout<<a+b;
}

int main() {
    int a,b;
    cout<<"Enter first value :"<<endl;
    cin>>a;
    cout<<"Enter the second value :"<<endl;
    cin>>b;
    cout<<"Answer is: ",addition(a,b);
    cout<<endl;
    return 0;
}