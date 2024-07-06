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

    //Destructor
    ~Node(){
        int val = this->data;
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
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


//delete node
void deleteNode(Node* &tail,int value){
    //empty node
    if(tail == NULL){
        cout<<"List is already empty "<<endl;
        return;
    }
    else{
        //non empty list
        Node* prev = tail;
        Node* curr = prev->next;
        
        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        //if 1 Node
        if(curr == prev){
            tail = NULL;
        }

        //if More than 2 Node
        else if(tail == curr){
            tail = prev;
        }

        curr->next = NULL;
        delete curr;
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

int main(){
    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,4,10);
    print(tail);

    insertNode(tail,10,55);
    print(tail);

    insertNode(tail,4,99);
    print(tail);

    insertNode(tail,55,199);
    print(tail);

    deleteNode(tail,3);
    print(tail);

    return 0;
}