#include<bits/stdc++.h>
using namespace std;

class Queues{
    private:
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int data){
        s1.push(data);
    }

    int pop(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topVal = s2.top();
        s2.pop();
        return topVal;
    }

    bool empty(){
        if(s1.empty() && s2.empty()){
            return true;
        }
        return false;
    }

    int front(){
        if(s1.empty() && s2.empty()){
            cout<<"Queu is empty"<<endl;
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

};

int main(){
    Queues q;
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; // 10
    cout << "Pop element: " << q.pop() << endl; // 10
    cout << "Front element: " << q.front() << endl; // 20
    cout << "Pop element: " << q.pop() << endl; // 20
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // No
    cout << "Pop element: " << q.pop() << endl; // 30
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl; // Yes
    return 0;
}