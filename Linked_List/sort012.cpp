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

void insertAtTail2(Node* tail,Node* curr){
    tail->next = curr;
    tail = curr;
}

//Sorting 0,1,2 normal appraoch => T.C = O(n)
Node* sortList(Node* &head){
    //initializing all 0,1,2 as 0
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    //increment of 0,1,2
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == 0)
            zeroCount++;
        else if(temp->data == 1)
            oneCount++;
        else if(temp->data == 2)
            twoCount++;
        
        temp = temp->next;
    }

    temp = head;
    
    //inserting in temp
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 0){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;

}

//Through links or pointer => T.C = O(n)
Node* sortList2(Node* head){
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;
    Node* curr = head;

    //Create seperate list for 0,1,2
    while(curr != NULL){
        int value = curr->data;
        if(value == 0)
            insertAtTail2(zeroTail,curr);
        else if(value == 1)
            insertAtTail2(oneTail,curr);
        else if(value == 2)
            insertAtTail2(twoTail,curr);
    
        curr = curr->next;
    }

    //Mergeing of 0,1,2
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    head = zeroHead->next;

    //Now delete dummy node
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main(){
    Node* ankit = new Node(0);
    // cout<<ankit->data;

    Node* head =ankit;
    print(head);

    insertAtHead(head,1);
    print(head);

    insertAtHead(head,2);
    print(head);
    
    Node* tail = ankit;
    insertAtTail(tail,1);
    print(head);

    insertAtTail(tail,0);
    print(head);

    insertAtTail(tail,2);
    print(head);

    Node* sorted = sortList(head);
    print(head);

    Node* sorted2 = sortList2(head);
    print(head);



    return 0;
}