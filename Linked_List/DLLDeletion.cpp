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

    //Destructor
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
    }
};

//print
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//get the length of the list
int getLength(Node* &head){
    int len=0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    cout<<"Length of list is ";
    return len;
}

//Insert at head
void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//insert at tail
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

//insert at position
void insertAtPosition(Node* &tail, Node* &head,int position,int data){
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

    if(temp==NULL){
        insertAtTail(tail,data);
        return;
    }
    
    Node* nayaNode = new Node(data);
    nayaNode->next = temp->next;
    temp->next = nayaNode;
    nayaNode->prev = temp;

}

//delete the node
void deleteion(Node* &head, int position){
    //delete head
    if(position==1){
        Node* temp = head;
        head = head->next;
        head->next->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* previ = NULL;
        Node* curr = head;
        int cnt=1;
        while(cnt<position){
            previ = curr;
            curr = curr->next;
            cnt++;
        }
        previ->next = curr->next;
        curr->next->prev = previ;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }

}

int main(){
    Node* ankit = new Node(10);
    Node* head = ankit;
    Node* tail = ankit;
    print(head);
    
    insertAtHead(head,11);
    print(head);
    
    insertAtHead(head,12);
    print(head);

    insertAtTail(tail,13);
    print(head);

    insertAtPosition(tail,head,3,14);
    print(head);

    deleteion(head,1);
    print(head);

    deleteion(head,3);
    print(head);

    cout<<getLength(head)<<endl;

    return 0;
}