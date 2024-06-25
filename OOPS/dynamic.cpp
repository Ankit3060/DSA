// In this code we have used static and dynamic allocation.

#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    
    public:
    char level;

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

};

int main(){
    //Static allocation
    Hero ankit;
    ankit.setHealth(70);
    // ankit.setLevel('A');
    ankit.level = 'A';
    cout<<"Health is : "<<ankit.getHealh()<<endl;
    cout<<"Level is : "<<ankit.level<<endl;


    //Dynamic allocation
    Hero *b = new Hero;
    b->setHealth(90);
    b->setLevel('B');
    //we can write in this way also
    cout<<"Health is : "<<(*b).getHealh()<<endl;
    cout<<"Level is : "<<(*b).level<<endl;
    cout<<"Level is : "<<(*b).getLevel()<<endl;

    //We can also write in this way
    cout<<"Health is : "<<b->getHealh()<<endl;
    cout<<"Level is : "<<b->getLevel()<<endl;
    cout<<"Level is : "<<b->level<<endl;

    return 0;
}