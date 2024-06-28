#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    char level;

    public:
    //Staic member
    static int timeToComplete;
    //Static function it can access only static member
    static int random(){
        // cout<<this->health<<endl;
        return timeToComplete;
    }

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

//Static member
int Hero::timeToComplete=5;

int main(){
    //To access the static function
    cout<<Hero::timeToComplete<<endl;

    // //It can be done with simple obj also but not recommended
    // Hero ankit;
    // cout<<ankit.timeToComplete<<endl;

    // //We can also update with obj but not recommended
    // Hero b;
    // b.timeToComplete=10;
    // cout<<ankit.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;

    //Staitc Function
    cout<<Hero::random()<<endl;


    return 0;
}