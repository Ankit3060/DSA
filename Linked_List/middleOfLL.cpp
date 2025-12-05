// This code is for finding the middle of the list
// T.C = O(n)

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
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

int getLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    // cout<<"Length of list is ";
    return length;
}

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

Node* findMid(Node* head){
    int len = getLength(head);
    int ans = (len/2);
    Node* temp = head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data;

    Node* head = ankit;
    print(head);

    cout<<"Length of the list is : ";
    cout<<getLength(head)<<endl;

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,12);
    print(head);

    insertAtHead(head,13);
    print(head);

    insertAtHead(head,14);
    print(head);

    insertAtHead(head,15);
    print(head);

    insertAtHead(head,16);
    print(head);

    Node* midData = findMid(head);
    cout<<"The middle node data is :"<<midData->data;
    // print(head);

    return 0;
}