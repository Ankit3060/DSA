// this code is for reversing of the stack
// Eg. S = 3 5 7 9 11
// new S = 11 9 7 5 3 

#include<bits/stdc++.h>
using namespace std;

//inserting the elemen at bottom
void insertAtBottom(stack<int>&inputStack, int element){
    //Base condition
    if(inputStack.empty()){
        inputStack.push(element);
        return;
    }

    //if not bottom then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    insertAtBottom(inputStack, element);

    //the value kept aside is pushed into main stack again
    inputStack.push(num); 
}

// reversing the stack
void reverseStack(stack<int>&inputStack){
    //Base condition
    if(inputStack.empty()){
        return;
    }

    //if not bottom then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    reverseStack(inputStack);

    //insert the element at bottom function
    insertAtBottom(inputStack,num); 
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

    cout << "Stack before reverse: ";
    printStack(inputStack);

    reverseStack(inputStack);

    cout << "Stack after reverse: ";
    printStack(inputStack);

    return 0;
}