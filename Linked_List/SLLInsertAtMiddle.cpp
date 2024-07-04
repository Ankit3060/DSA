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

void insertAtHead(Node* &head,int data){
    //create a new node
    Node* temp = new Node(data);
    // Point the next of the new node to the current head
    temp->next = head;
    // Update the head to be the new node
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    //create a new node
    Node* temp = new Node(data);
    tail->next=temp;
    tail = temp;
}

void insertAtMiddle(Node* &tail, Node* &head,int position,int data){

    //if the insertion is at first location than
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    //first make a temp pointing to head and iterate it reaches the pos-1 location
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //if the insertion is at last location than
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }

    //Now make a new node that you want to insert
    Node* nodeToInsert = new Node(data);

    //make a connection in such a way that both temp and newNode address point to same node
    nodeToInsert->next = temp->next;

    //Now break the temp node address and assign that temp address to newNode
    temp->next = nodeToInsert;
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

    insertAtTail(tail,29);
    print(head);

    insertAtMiddle(tail,head,1,55);
    print(head);

    insertAtMiddle(tail,head,6,55);
    print(head);

    return 0;
}

//All insert at middle,tail,head combo
/*
#include <bits/stdc++.h>
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

void insertAthead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next=temp;
    tail=temp;
}

void insertAtMiddle(Node* &tail, Node* &head, int position,int data){
    
    if(position==1){
        insertAthead(head,data);
        return;
    }
    
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    
    Node* newNode = new Node(data);
    
    newNode->next = temp->next;
    
    temp->next = newNode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;
    
    Node* head = ankit;
    insertAthead(head,15);
    print(head);
    
    Node* tail = ankit;
    insertAtTail(tail,26);
    print(head);
    
    insertAtMiddle(tail,head,2,99);
    print(head);
    
    insertAtMiddle(tail,head,1,66);
    print(head);
    
    insertAtMiddle(tail,head,6,199);
    print(head);
    return 0;
}

*/