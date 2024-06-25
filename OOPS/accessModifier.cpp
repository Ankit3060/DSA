#include<bits/stdc++.h>
using namespace std;

class Hero{
    //public can access from anywhere
    public:
    int health;
    char level;

    //Private can access inside class only
    // private:
    // char name;
    // void print(){
    //     cout<<name<<endl;
    // }
};

int main(){
    Hero ankit;
    //Giving data
    ankit.health=95;
    ankit.level='A';

    cout<<"Health is : "<<ankit.health<<endl;
    cout<<"Level is : "<<ankit.level;

    return 0;
}