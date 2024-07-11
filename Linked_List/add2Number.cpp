#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
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

// Finding the reverse
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

// insert at tail
void insertAtTail(Node* &head, Node* &tail, int val){
    Node* temp = new Node(val);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        tail->next = temp;
        tail = temp;
    }
}

struct Node* add(struct Node* first, struct Node* second){
    int carry=0;
    Node* ansHead = NULL;
    Node* ansTail = NULL;

    while(first != NULL && second != NULL){
        int sum = carry+first->data+second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
        second = second->next;
    }

    while(first != NULL){
        int sum = carry+first->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
    }

    while(second != NULL){
        int sum = carry+second->data;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second->next;
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
    }
    
    return ansHead;
}

struct Node* addTwo(struct Node* first, struct Node* second){
    //reverse both the LL
    first = reverse(first);
    second = reverse(second);

    //add both LL
    Node* ans = add(first,second);

    //After that reverse the ans to get exact ans
    ans = reverse(ans);

    return ans;
}


int main(){
    Node* first = new Node(1);
    first->next = new Node(3);
    first->next->next = new Node(5);
    cout<<"First Node is : ";
    print(first);

    Node* second = new Node(2);
    second->next = new Node(4);
    second->next->next = new Node(6);
    cout<<"Second Node is : ";
    print(second);

    Node* added = addTwo(first, second);
    cout<<"Added Node is :";
    print(added);

    return 0;
}