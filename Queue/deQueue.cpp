#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>q;
    q.push_back(50);
    q.push_back(25);
    q.push_front(10);
    q.push_front(20);

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    q.pop_back();
    q.pop_front();

    cout<<q.front()<<endl;
    cout<<q.back()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}