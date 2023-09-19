#include <iostream>
using namespace std;

int maxValue(int a, int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main() {
    int a,b,c;
    cout<<"Ente the value of A , B and C:"<<endl;
    cin>>a>>b>>c;
    int answer = maxValue(a,b,c);
    cout<<"maximum value is :"<<answer;
    cout<<endl;
    return 0;
}
