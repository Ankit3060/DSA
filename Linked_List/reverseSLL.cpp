#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void inserAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


//Normal reverse
void reverseNode(Node* &head){

    //if node is empty or single nod
    if(head==NULL || head->next==NULL){
        return;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    // reverseNode2(head,curr,prev);

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}


//using recursion
void reverseNode2(Node* &head,Node* curr,Node* prev){
    //base condition
    if(curr == NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    curr->next = prev;
    reverseNode2(head,forward,curr);
}

void reverseNode2data(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    reverseNode2(head,curr,prev);
}


int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;
    Node* head = ankit;
    print(head);

    inserAtHead(head,11);
    print(head);
    
    inserAtHead(head,12);
    print(head);

    inserAtHead(head,13);
    print(head);

    inserAtHead(head,14);
    print(head);

    reverseNode(head);
    print(head);

    cout<<"After reverse again sort it and reverse it"<<endl;

    reverseNode(head);
    print(head);

    reverseNode2data(head);
    print(head);

    return 0;
}