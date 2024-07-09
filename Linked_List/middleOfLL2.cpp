//This is approach 2 for finding hte middle of the node
//T.C = O(n/2) -> O(n)

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

void print(Node* & head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insertAtHeaad(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

Node* findMiddle(Node* &head){
    //if list is empty or 1 node
    if(head == NULL || head->next ==NULL){
        return head;
    }
    //for 2 node
    if(head->next->next == NULL){
        return head->next;
    }

    Node* fast = head->next;
    Node* slow = head;
    while(fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}

int main(){
    Node* ankit = new Node(10);
    // cout<<ankit->data;
    Node* head = ankit;

    insertAtHeaad(head,11);
    print(head);

    insertAtHeaad(head,12);
    print(head);

    insertAtHeaad(head,13);
    print(head);

    insertAtHeaad(head,14);
    print(head);

    insertAtHeaad(head,15);
    print(head);

    Node* midData = findMiddle(head);
    cout<<"The middle data is  : "<<midData->data<<endl;
    return 0;
}