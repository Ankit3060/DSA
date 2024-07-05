#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

//Insert at head
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp; 
}

//Insert At tail
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//Insert at middle
void insertAtMiddle(Node* &tail,Node* &head,int position,int data){

    if(position==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return;
    }

    Node* newNode = new Node(data);
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

//Get the length of  the linked list
int getLength(Node* head){
    int length=0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    cout<<"Length of the LL is ";
    return length;
}


//ptint the LL
void print(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data<<endl;
    // cout<<ankit->next<<endl;
    // cout<<ankit->prev<<endl;
    Node* head = ankit;
    print(head);

    insertAtHead(head,15);
    print(head);

    Node* tail = ankit;

    insertAtTail(tail,25);
    print(head);

    insertAtMiddle(tail,head,2,99);
    print(head);

    cout<<getLength(head);


    return 0;
}