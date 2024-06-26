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
    
    //This is parameterized constructor
    Hero(int health){
        cout<<"This->"<<this<<endl;
        this->health=health;
    }
    Hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    //Copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor is called "<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
};

int main(){
    // Hero ankit;
    // ankit.setHealth(70);
    // ankit.setLevel('C');
    Hero ankit(70,'C');
    ankit.print();

    //Copy of consructor
    Hero abhi(ankit);
    abhi.print();
    return 0;
}