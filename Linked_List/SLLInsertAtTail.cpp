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
void insertAtTail(Node* &tail, int data){
    //create a new node
    Node* temp = new Node(data);
    tail->next=temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->next<<endl;
    // cout<<ankit->data<<endl;

    Node* head = ankit;
    print(head);

    Node* tail = ankit;
    insertAtTail(tail,15);
    print(head);
    
    insertAtTail(tail,25);
    print(head);

    return 0;
}