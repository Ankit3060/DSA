#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int age;
    private:
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        return this->weight = w;
    }
};

class Male : public Human {
    public:
    string color;

    void attack(){
        cout<<"Male is on hunt"<<endl;
    }
};

class Male2 : protected Human {
    public:
    string color;

    void attack(){
        cout<<"Male is on hunt"<<endl;
    }
    int getAge(){
        return this->age;
    }
};

using namespace std;
int main(){
    /*
    Male ankit;
    cout<<ankit.age<<endl;
    cout<<ankit.height<<endl;
    cout<<ankit.weight<<endl;
    cout<<ankit.color<<endl;
    ankit.attack();
    ankit.setWeight(53);
    cout<<ankit.weight<<endl;
    */

   Male2 ankit1;
   cout<<ankit1.getAge()<<endl;



    return 0;
}