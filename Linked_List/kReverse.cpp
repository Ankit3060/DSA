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
    head = temp;
}

void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

Node* kReverse(Node* &head, int k){
    //base condition
    if(head == NULL){
        return NULL;
    }

    //solve 1 case with normal reverse method
    Node* forward = NULL;
    Node* curr = head;
    Node* previ = NULL;
    int cnt = 0;
    while(curr!=NULL && cnt<k){
        forward = curr->next;
        curr->next = previ;
        previ = curr;
        curr = forward;
        cnt++;
    }
    //call the recursion
    if(forward != NULL){
        head->next = kReverse(forward,k);
    }
    return previ;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data;
    Node* head = ankit;
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,12);
    print(head);

    Node* tail = ankit;
    insertAtTail(tail,13);
    print(head);

    insertAtTail(tail,14);
    print(head);

    //K reverse
    int k;
    cout<<"Enter the value for K reverse :"<<endl;
    cin>>k;
    head = kReverse(head, k);
    print(head);

    return 0;
}