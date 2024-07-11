// T.c = O(n)
// S.C = O(1)
// This is optimize than previous one

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

//finding the mid
Node* getMid(Node* &head){
    //for 1 node
    if(head == NULL || head->next == NULL){
        return head;
    }
    //for 2 node
    if(head->next->next == NULL){
        return head->next;
    }
    //for remaining node 
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

bool isPalindrome(Node* &head){
    // Steps: 
    // 1. find middle
    // 2. reverse LL after mid
    // 3. compare both half are palindrome or not
    // 4. optional repeat step 2 for making LL original form
    if(head == NULL || head->next==NULL){
        return true;
    }
    //find mid
    Node* mid = getMid(head);

    //Reverse LL after mid
    Node* temp = mid->next;
    mid->next = reverse(temp);

    //compare both half
    Node* head1 = head;
    Node* head2 = mid->next;
    while(head2 != NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    //Repeat step 2 optional 
    // Node* temp = mid->next;
    // mid->next = reverse(temp);

    return true;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(1);

    print(head);

    if(isPalindrome(head)){
        cout<<"It is palindrome "<<endl;
    }
    else{
        cout<<"It is not a palindrome "<<endl;
    }

    return 0;
}