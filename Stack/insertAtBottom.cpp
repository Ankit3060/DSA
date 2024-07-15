// this code is for inserting the element at the bottom of the stack
// Eg. S = 3 5 7 9 11 and X = 69 
// new S = 69 3 5 7 9 11 

#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int x){
    //Base condition
    if(inputStack.empty()){
        inputStack.push(x);
        return;
    }

    //if not bottom then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    solve(inputStack, x);

    //the value kept aside is pushed into main stack again
    inputStack.push(num); 
}

stack<int> insertAtBottom(stack<int>&inputStack,int x){
    solve(inputStack, x);
    return inputStack;
}

void printStack(stack<int> s) {
    vector<int> v;
    while (!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
    reverse(v.begin(), v.end());
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}
int main(){
    stack<int>inputStack;
    inputStack.push(3);
    inputStack.push(5);
    inputStack.push(7);
    inputStack.push(9);
    inputStack.push(11);

    cout << "Stack before inserting bottom element: ";
    printStack(inputStack);

    int x = 69;
    insertAtBottom(inputStack, x);

    cout << "Stack after inserting bottom element: ";
    printStack(inputStack);

    cout<<"Top element is "<<inputStack.top()<<endl;
    cout<<"Bottom element is "<<x<<endl;
    return 0;
}