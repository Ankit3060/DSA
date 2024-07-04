#include<bits/stdc++.h>
using namespace std;

//Craeating a Node
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

//Insert At head function
void insertAtHead(Node* &head,int data){
    //create a new node
    Node* temp = new Node(data);
    // Point the next of the new node to the current head
    temp->next = head;
    // Update the head to be the new node
    head = temp;
}

//Printing the linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;

    //create a head point to node 1 that is ankit
    Node* head = ankit;
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,20);
    print(head);

    insertAtHead(head,15);
    print(head);

    return 0;
}