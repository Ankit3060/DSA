// When patameterized constructor is created default constructor is die 
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
    
    //This is parameterized constructor
    Hero(int health){
        cout<<"This->"<<this<<endl;
        this->health=health;
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main(){
    Hero ankit(70);
    // cout<<"Address of ankit is : "<<&ankit<<endl;
    ankit.print();

    //Dynamic constructor
    Hero *b = new Hero(52);
    b->print();

    Hero ram(45,'C');
    ram.print();

    return 0;
}