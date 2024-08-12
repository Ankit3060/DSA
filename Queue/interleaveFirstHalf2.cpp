#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int>&q){
    stack<int>s;
    int n = q.size();

    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for(int i=0;i<n/2;i++){
        q.push(q.front());
        q.pop();
    }

    for(int i=0;i<n/2;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        int val = s.top();
        s.pop();
        q.push(val);
        int val2 = q.front();
        q.pop();
        q.push(val2);
    }

}

int main(){
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);

    interleave(q);
    int length = q.size();
    for (int i = 0; i < length; i++) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}