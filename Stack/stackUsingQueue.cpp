#include<bits/stdc++.h>
using namespace std;

class Stacko{
    private:
    queue<int>q1;
    queue<int>q2;

    public:
    void push(int data){
        q2.push(data);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1,q2);
    }

    int pop(){
        if(q1.empty()){
            return -1;
        }
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }
        return q1.front();
    }

    int size(){
        return q1.size();
    }
};

int main(){
    Stacko s;
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<" size is "<<s.size()<<endl;

    cout<<"Top element is : "<<s.top()<<endl;

    return 0;
}