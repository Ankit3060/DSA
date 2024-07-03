#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Human{
    public:
    void speeak(){
        cout<<"Speaking"<<endl;
    }
};

class multiple : public Animal, public Human{

};

int main(){
    multiple ankit;
    ankit.bark();
    ankit.speeak();

    return 0;
}