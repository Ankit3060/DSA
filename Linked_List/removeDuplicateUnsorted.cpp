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

//Using MAP
Node* removeDuplicateMap(Node* &head){
    if(head == NULL){
        return NULL;
    }
    map<int , bool> visited;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (visited[curr->data]) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
    return head;
}

//Using two loop
Node* removeDuplicate(Node* &head){
    if(head==NULL){
        return NULL;
    }
    Node* curr = head;
    while(curr != NULL){
        Node* prev = curr;
        Node* temp = curr->next;
        while(temp != NULL){
            if (curr->data == temp->data) {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data;

    Node* head =ankit;
    print(head);

    insertAtHead(head,11);
    print(head);

    insertAtHead(head,12);
    print(head);

    Node* tail = ankit;
    insertAtTail(tail,11);
    print(head);

    // Node* afterRemoving = removeDuplicate(head);
    // cout<<"After removing Duplicate in sorted list : ";
    // print(head);

    Node* afterRemoving = removeDuplicateMap(head);
    cout<<"After removing Duplicate in sorted list : ";
    print(head);

    return 0;
}