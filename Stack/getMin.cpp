// This code is to find the minimum element from the stack
// to solve this problem we have to take the two stack
// push the element in main stack and in min Stack if element is smaller than the top element of min stack
// to get min simply take take the top element of the min stack

#include<bits/stdc++.h>
using namespace std;

class MinStack{
    private:
    stack<int>mainStack;
    stack<int>minStack;

    public:
    void push(int x){
        mainStack.push(x);

        if(minStack.empty() || x <= minStack.top()){
            minStack.push(x);
        }
    }

    void pop(){
        if(mainStack.empty()){
            cout<<"Stack is empty"<<endl;
        }
        if(mainStack.top() == minStack.top()){
            minStack.pop();
        }
        mainStack.pop();
    }

    int top(){
        if(mainStack.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return mainStack.top();
    }

    int getMin(){
        if(minStack.empty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return minStack.top();
    }

};

int main(){
    MinStack ankit;
    ankit.push(5);
    ankit.push(3);
    ankit.push(8);
    ankit.push(2);
    ankit.push(4);

    cout<<"Top element is : "<<ankit.top()<<endl;
    ankit.pop();
    cout<<"Top element is : "<<ankit.top()<<endl;
    cout<<"Minimum element is : "<<ankit.getMin()<<endl;

    ankit.pop();
    cout<<"Top element is : "<<ankit.top()<<endl;
    cout<<"Minimum element is : "<<ankit.getMin()<<endl;
    return 0;
}