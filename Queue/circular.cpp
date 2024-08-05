#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    private:
    int *arr;
    int front;
    int rear;
    int size;

    // Constructor
    public:
    CircularQueue(int s){
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Enqueue
    bool enqueue(int data){
        if((front==0 && rear == size-1) ||( rear==(front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front == -1){
            front = 0;
            rear = 0;
            arr[rear] = data;
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }
        else{
            rear++;
            arr[rear] = data;
        }
        return true;
    }

    // Dequque
    int dequeue(){
        if(front==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front==rear){
            front = rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }

    // Display Queue
    void displayQueue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Elements in the Circular Queue are: ";
        if (rear >= front) {
            for (int i = front; i <= rear; i++)
                cout << arr[i] << " ";
        } else {
            for (int i = front; i < size; i++)
                cout << arr[i] << " ";
            for (int i = 0; i <= rear; i++)
                cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main(){
    CircularQueue q(5);
    q.enqueue(14);
    q.enqueue(22);
    q.enqueue(13);
    q.enqueue(6);

    q.displayQueue();

    cout << "Deleted value = " << q.dequeue() << endl;
    cout << "Deleted value = " << q.dequeue() << endl;

    q.displayQueue();

    q.enqueue(9);
    q.enqueue(20);
    q.enqueue(5);

    q.displayQueue();

    cout << "Deleted value = " << q.dequeue() << endl;
    cout << "Deleted value = " << q.dequeue() << endl;
    cout << "Deleted value = " << q.dequeue() << endl;
    cout << "Deleted value = " << q.dequeue() << endl;

    q.displayQueue();

    return 0;
}