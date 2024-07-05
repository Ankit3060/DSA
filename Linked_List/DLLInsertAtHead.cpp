//This is doubly linked list implementation
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

//Insert at head function
void insertAthead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//Get the length of the Linked list
int getLength(Node* head){
    int length=0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    cout<<"Length of the linked list is ";
    return length;
}

//Printing all the linked list
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* ankit = new Node(10);

    Node* head = ankit;
    print(head);

    insertAthead(head,55);
    print(head);

    insertAthead(head,99);
    print(head);

    insertAthead(head,66);
    print(head);

    cout<<getLength(head)<<endl;

    return 0;
}