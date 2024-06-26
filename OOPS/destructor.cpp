#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    char level;

    public:
    //Getter : (To get the data that are procted)
    int getHealh(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //Setter : (To change or manipultae the data we use setter)
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

    //Default  constructor
    Hero(){
        cout<<"Default Construcor is called"<<endl;
    }

    ~Hero(){
        cout<<"Destructor is called "<<endl;
    }
};

int main(){
    //static allocation
    Hero ankit;

    //Dynamic allocaion
    Hero *b = new Hero();
    delete b; //Delete is used to deallocate the memory
    return 0;
}