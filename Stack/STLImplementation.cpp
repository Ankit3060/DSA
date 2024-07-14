// This is stack implemetation using STL - #include<stack>

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    //Push
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);

    //pop
    s.pop();
    s.pop();

    //Peak or top element
    s.top();
    cout<<"Peak element is : "<<s.top()<<endl;

    //Stack is empty or not
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    //size 
    cout<<"Size of stack is : "<<s.size()<<endl;
    return 0;
}