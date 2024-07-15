// this code is for sorting of the stack
// Eg. S = 3 -5 7 -9 11
// new S = -9 -5 3 7 11 

#include<bits/stdc++.h>
using namespace std;

//inserting the elemen at bottom
void sortedInsert(stack<int>&inputStack, int element){
    //Base condition
    if(inputStack.empty() || (!inputStack.empty() && inputStack.top() < element)){
        inputStack.push(element);
        return;
    }

    //if not bottom then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    sortedInsert(inputStack, element);

    //the value kept aside is pushed into main stack again
    inputStack.push(num); 
}

// reversing the stack
void sortStack(stack<int>&inputStack){
    //Base condition
    if(inputStack.empty()){
        return;
    }

    //if not bottom then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    sortStack(inputStack);

    //sort the element function
    sortedInsert(inputStack,num); 
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
    inputStack.push(-5);
    inputStack.push(7);
    inputStack.push(-9);
    inputStack.push(11);

    cout << "Stack before sorting: ";
    printStack(inputStack);

    sortStack(inputStack);

    cout << "Stack after sorting: ";
    printStack(inputStack);

    return 0;
}