#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int>&q){
    int n = q.size();
    queue<int>newq;
    for(int i=0;i<n/2;i++){
        newq.push(q.front());
        q.pop();
    }

    while(!newq.empty()){
        int val = newq.front();
        newq.pop();
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