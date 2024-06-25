#include<bits/stdc++.h>
using namespace std;

class Hero{
    public:
    //This is default constructor made in the name of class
    Hero(){
        cout<<"Constructor is called"<<endl;
    }
};

int main(){
    //Static constructor
    cout<<"Hlo"<<endl;
    Hero ankit;
    cout<<"ji"<<endl;

    //Dynamic constructor
    Hero *b = new Hero;
    return 0;
}