#include<bits/stdc++.h>
using namespace std;

class DeQueue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    public:
    DeQueue(int n){
        size = n;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    bool pushFront(int data){
        if(isFull()){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front == 0 && rear != size-1){
            front = size-1;
        }
        else{
            front--;
        }
        arr[front] = data;
        return true;
    }

    bool pushRear(int data){
        if(isFull()){
            return false;
        }
        else if(front == -1){
            front = rear = 0;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
        }
        else{
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int popFront(){
        if(front==-1){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front==rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front =0;
        }
        else{
            front++;
        }
        return ans;
    }

    int popRear(){
        if(front==-1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if(front==rear){
            front = rear = -1;
        }
        else if(rear==0){
            rear = size-1;
        }
        else{
            rear--;
        }
        return ans;
    }

    int getFront(){
        if(front==-1){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    int getRear(){
        if(front==-1){
            return -1;
        }
        else{
            return arr[rear];
        }
    }

    // Is full function to check the array is full or not
    bool isFull(){
        if((front==0 && rear == size-1) ||( rear==(front-1)%(size-1))){
            return true;
        }else{
            return false;
        }
    }
};

int main() {
    // Create a DeQueue of size 5
    DeQueue dq(5);

    // Push elements to the front
    dq.pushFront(10);
    dq.pushFront(20);
    dq.pushFront(30);

    // Push elements to the rear
    dq.pushRear(40);
    dq.pushRear(50);

    // Display the front element
    cout << "Front element: " << dq.getFront() << endl; // Output should be 30

    // Display the rear element
    cout << "Rear element: " << dq.getRear() << endl; // Output should be 50

    // Pop elements from the front
    cout << "Popped from front: " << dq.popFront() << endl; // Output should be 30
    cout << "Popped from front: " << dq.popFront() << endl; // Output should be 20

    // Pop elements from the rear
    cout << "Popped from rear: " << dq.popRear() << endl; // Output should be 50
    cout << "Popped from rear: " << dq.popRear() << endl; // Output should be 40

    // Check front and rear after pops
    cout << "Front element after pops: " << dq.getFront() << endl; // Output should be 10
    cout << "Rear element after pops: " << dq.getRear() << endl; // Output should be 10

    // Push more elements to test wrap-around
    dq.pushRear(60);
    dq.pushRear(70);
    dq.pushFront(80);

    // Display the elements again
    cout << "Front element: " << dq.getFront() << endl; // Output should be 80
    cout << "Rear element: " << dq.getRear() << endl; // Output should be 70

    return 0;
}
