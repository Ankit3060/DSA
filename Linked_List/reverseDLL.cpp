#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void reverse(Node* &head){
    if (head == NULL) {
        return;
    }
    Node* curr = head;
    Node* previ = NULL;
    Node* forward = NULL;
    while(curr != NULL){
        forward = curr->next;
        curr->next = previ;
        if(forward != NULL){
            forward->prev = curr;
        }
        previ = curr;
        curr = forward;
    }
    head = previ;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;
    // cout<<ankit->prev<<endl;
    Node* head = ankit;
    print(head);

    insertAtHead(head,11);
    print(head);

    reverse(head);
    print(head);

    return 0;
}