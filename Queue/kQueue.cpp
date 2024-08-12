#include<bits/stdc++.h>
using namespace std;

class KQueue{
    private:
    int *arr;
    int *next;
    int *front;
    int *rear;
    int n;
    int k;
    int freespot;

    public:
    KQueue(int n, int k){
        this->n=n;
        this->k=k;
        arr = new int[n];
        front = new int[k];
        rear = new int[k];

        // making all the front and rear intially -1
        for(int i=0;i<k;i++){
            front[i] = -1;
            rear[i] = -1;
        }

        next = new int[n];
        // Making the next with increasing order
        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        freespot = 0;
    }

    // Function to push into the stack
    bool enqueue(int data, int qn){
        // Check for overflow
        if(freespot == -1){
            return false;
        }

        // Make index in free space to push the data
        int index = freespot;

        // Update the freespot
        freespot = next[index];

        // if first element then push in front
        if(front[qn-1]==-1){
            front[qn-1] = index;
        }else{
            // if not first then make the connection to next data
            next[rear[qn-1]] = index;
        }

        //update rear
        rear[qn-1] = index;
        // update next
        next[index] = -1;
        // insert the data
        arr[index] = data;

        return true;
    }


    // Pop the element
    int dequeue(int qn){
        // Check for underflow
        if(front[qn-1]==-1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        // find the index to pop
        int index = front[qn-1];
        
        // update the front
        front[qn-1] = next[index];
        
        // Manage free spot
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
};

int main(){
    KQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);
    q.enqueue(30,2);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;

    q.enqueue(100,1);
    cout<<q.dequeue(1)<<endl;

    return 0;
}