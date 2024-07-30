// This is N stack problem from coding ninjas
// in this problem we push and pop many stack in one array

#include<bits/stdc++.h>
using namespace std;

class NStack{
    int *arr;
    int *top;
    int *next;
    int freeSpot;
    int n,s;

    public:
    //Constructor
    NStack(int N, int S){
        n=N;
        s=S;
        arr = new int[s];
        top = new int[n];
        next = new int[s];

        //intializing top
        for(int i=0;i<n;i++){
            top[i]=-1;
        }

        //intializing next
        for(int i=0;i<s;i++){
            next[i]=i+1;
        }
        //update last index of next
        next[s-1] = -1;

        //intialize freeSpot
        freeSpot = 0;
    }

    //push operation
    bool push(int x, int m){
        //check overflow
        if(freeSpot==-1){
            return false;
        }
        // 1. find index
        int index = freeSpot;
        // 2. update freeSpot
        freeSpot = next[index];
        // 3. insert element
        arr[index] = x;
        // 4. update next
        next[index] = top[m-1];
        // 5. update top
        top[m-1] = index;

        return true;
    }

    // pop operation (simply reverse the push operation)
    int pop(int m){
        //check overflow
        if(top[m-1]==-1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freeSpot;
        freeSpot = index;

        return arr[index];
    }
};

int main() {
    // Create 3 stacks in an array of size 10
    NStack nStack(3, 10);

    // Push elements into different stacks
    nStack.push(15, 1);
    nStack.push(45, 1);

    nStack.push(17, 2);
    nStack.push(49, 2);

    nStack.push(39, 3);
    nStack.push(11, 3);

    // Pop elements from stacks
    cout << "Popped element from stack 1 is " << nStack.pop(1) << endl;
    cout << "Popped element from stack 2 is " << nStack.pop(2) << endl;
    cout << "Popped element from stack 3 is " << nStack.pop(3) << endl;

    return 0;
}
