#include <iostream>
using namespace std;

double AreaOfCircle(double r)
{
    double pie=3.1415;
    double area = pie*r*r;
    return area;
}

int main() {
    double r;
    cout<<"Enter the radius of circle :"<<endl;
    cin>>r;
    double answer = AreaOfCircle(r);
    cout<<"Area of circle with radius "<<r<<" is "<<answer;
    cout<<endl;
    return 0;
}