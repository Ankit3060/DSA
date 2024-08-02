#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front;
    int rear;

    public:
    
    // Constructor
    Queue(int size){
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    // Enqueue
    void enqueue(int data){
        if(rear == size){
            cout<<"Queue is full";
        }
        else{
            arr[rear] = data;
            rear++;
        }
    }

    // Dequeue
    int dequeue(){
        if(front==rear){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;

            if(front == rear){
                front=0;
                rear = 0;
            }
            return ans;
        }
    }

    // Front
    int getFront(){
        if(front==rear){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    // empty
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    Queue q(5);

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Attempt to enqueue to a full queue
    q.enqueue(60);  // This should print "Queue is full"

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl;  // Should print 10
    cout << "Dequeued: " << q.dequeue() << endl;  // Should print 20

    // Get front element
    cout << "Front: " << q.getFront() << endl;  // Should print 30

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;  // Should print "No"

    // Dequeue remaining elements
    cout << "Dequeued: " << q.dequeue() << endl;  // Should print 30
    cout << "Dequeued: " << q.dequeue() << endl;  // Should print 40
    cout << "Dequeued: " << q.dequeue() << endl;  // Should print 50

    // Check if the queue is empty
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;  // Should print "Yes"

    return 0;
}