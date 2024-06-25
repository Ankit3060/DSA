// To access the private part we use getter and setter

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
        //We can apply any modification in setter
        // if(name=='A'){
        //     health = h;
        // }
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

};

int main(){
    Hero ankit;

    //Normal condition if public class
    // cout<<"Health is : "<<ankit.health<<endl;
    //Getter condition
    cout<<"Helath is : "<<ankit.getHealh()<<endl;

    //Giving data normaly
    // ankit.health=95;
    //Setter condition
    ankit.setHealth(90);
    cout<<"Helath is : "<<ankit.getHealh()<<endl;
    
    //Normal public class
    ankit.level='A';
    cout<<"Level is : "<<ankit.level;

    return 0;
}