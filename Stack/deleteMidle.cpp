#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack,int count, int size){
    //Base condition
    if(count == size/2){
        inputStack.pop();
        return;
    }

    //if not midle then keep the value side by poping the value
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    solve(inputStack, count+1, size);

    //the value kept aside is pushed into main stack again
    inputStack.push(num); 
}

void deleteMiddle(stack<int>&inputStack,int size){
    int  count = 0;
    solve(inputStack, count, size);
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

    cout << "Stack before deleting middle element: ";
    printStack(inputStack);

    int size = inputStack.size();
    deleteMiddle(inputStack, size);

    cout << "Stack after deleting middle element: ";
    printStack(inputStack);
    return 0;
}