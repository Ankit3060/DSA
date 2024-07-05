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

int getLength(Node* head){
    int length=0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* ankit = new Node(10);

    Node* head = ankit;
    print(head);

    cout<<getLength(head)<<endl;

    return 0;
}