//This is implementation of singly linked list

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

int main(){
    Node* ankit = new Node(10);
    cout<<ankit->data<<endl;
    cout<<ankit->next<<endl;
    return 0;
}