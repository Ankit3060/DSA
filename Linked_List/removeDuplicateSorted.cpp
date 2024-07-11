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
    while(temp!=NULL){
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
    tail=temp;
}

Node* ramoveDuplicate(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        if((curr->next != NULL) && curr->data == curr->next->data){
            Node* next_next = curr->next->next;
            Node* todelete = curr->next;
            delete(todelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}


int main(){
    Node* ankit = new Node(11);
    // cout<<ankit->data;

    Node* head =ankit;
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,10);
    print(head);

    Node* tail = ankit;
    insertAtTail(tail,13);
    print(head);

    Node* afterRemoving = ramoveDuplicate(head);
    cout<<"After removinf Duplicate in sorted list : ";
    print(head);

    return 0;
}