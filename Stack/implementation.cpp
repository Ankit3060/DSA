// This is array approach to solve the stack
// This is without STL

#include <bits/stdc++.h>
using namespace std;

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }

    void pop()
    {
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack is usnderflow"<<endl;
        }
    }

    int peak()
    {
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    st.pop();
    cout<<st.peak()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    return 0;
}