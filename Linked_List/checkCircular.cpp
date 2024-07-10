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

void insertNode(Node* &tail,int element, int data){
    
    //empty list
    if(tail == NULL){
        Node* emptyNode = new Node(data);
        tail = emptyNode;
        emptyNode->next = emptyNode;

    }
    else{
        //non empty list
        //assuming that the element is present in the list
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element found = curr is representing that this is the element
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}


//print the list
void print(Node* tail){

    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }

    Node* temp = tail;

    // cout<<temp->data<<" ";
    // while(tail->next != temp){
    //     cout<<tail->data<<" ";
    //     tail = tail->next;
    // }
    // cout<<endl;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } 
    while(tail != temp);
    cout<<endl;
}

bool isCircular(Node* tail){
    //For empty list
    if(tail == NULL){
        return true;
    }

    //For 1 and more than 1 node
    Node* temp = tail->next;

    while(temp != NULL && temp != tail){
        temp = temp->next;
    }

    if(temp == tail){
        return true;
    }
    return false;
}


int main(){
    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,4,10);
    print(tail);

    if(isCircular(tail)){
        cout<<"Linked list is circular "<<endl;
    }
    else{
        cout<<"Not circular "<<endl;
    }

    return 0;
}