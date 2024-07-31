#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(15);
    q.push(55);

    cout<<"Top of queue is : "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }

    cout<<"Size of queue is : "<<q.size()<<endl;

    cout<<"Poping the elements "<<endl;
    q.pop();
    q.pop();
    q.pop();

    cout<<"Top of queue is : "<<q.front()<<endl;

    if(q.empty()){
        cout<<"Queue is empty "<<endl;
    }
    else{
        cout<<"Queue is not empty "<<endl;
    }
    
    cout<<"Size of queue is : "<<q.size()<<endl;
    return 0;
}