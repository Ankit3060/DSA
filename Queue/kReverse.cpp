// This is a program to reverse the first k elements of a queue.
// The time complexity of this program is O(n).
// Eg. Input: Queue: 1 2 3 4 5, k = 3
//     Output: Reversed Queue: 3 2 1 4 5

#include<bits/stdc++.h>
using namespace std;

queue<int> reverse(queue<int>q, int k, int n){
    stack<int>s;

    for(int i=0;i<k;i++){
        int element = q.front();
        q.pop();
        s.push(element);
    }

    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }

    for(int i=0;i<n-k;i++){
        int element = q.front();
        q.pop();
        q.push(element);
    }

    return q;
}

int main(){
    queue<int> q;

    // Push elements into the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    //Queue before reversal
    queue<int> temp_q = q; // Use a temporary queue to preserve the original queue
    cout<<"Original Queue: ";
    while (!temp_q.empty()) {
        cout << temp_q.front() << " ";
        temp_q.pop();
    }
    cout << endl;

    int k = 3;
    int n = q.size();

    // Reverse the queue
    q = reverse(q,k,n);

    // Print the reversed queue
    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}