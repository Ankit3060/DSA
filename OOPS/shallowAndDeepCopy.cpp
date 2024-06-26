#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    char level;

    public:
    char *name;
    //Getter : (To get the data that are procted)
    int getHealh(){
        return health;
    }
    char getLevel(){
        return level;
    }
    char* getName(){
        return name;
    }
    //Setter : (To change or manipultae the data we use setter)
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }
    void setName(char name[]){
        // name = name;
        strcpy(this->name, name);
    }

    //Default  constructor
    Hero(){
        cout<<"Default Construcor is called"<<endl;
        // cout<<"Name is "<<endl;
        name = new char[100];
    }

    //Copy constructor
    Hero(Hero& temp){
        cout<<"Copy constructor is called "<<endl;
        char *ch = new char [strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;  
        this->health=temp.health;
        this->level=temp.level;
    }

    void print(){
        cout<<"[ Name : "<<name<<", ";
        cout<<"Health : "<<health<<", ";
        cout<<"Level : "<<level<<" ]"<<endl;
    }
};
int main(){
    Hero ankit;
    ankit.setHealth(90);
    ankit.setLevel('A');
    char name[10]="Ankit";
    // ankit.setName("Ankit");
    ankit.setName(name);
    ankit.print();

    //Use default copy constructor for shallow copy && 
    Hero abhi(ankit);
    abhi.print();

    ankit.name[0]='S';
    ankit.print();
    abhi.print();

    return 0;
}