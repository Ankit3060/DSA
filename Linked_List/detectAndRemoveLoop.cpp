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
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } 
    while(tail != temp);
    cout<<endl;
}

//Finding the loop using MAP
bool detectLoop(Node* tail){
    //empty list
    if(tail == NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = tail;

    //Checking cycle is present or not
    while(temp!=NULL){
        //cycle present
        if(visited[temp] == true){
            cout<<"Cycle is present at : "<<temp->data<<endl;
            return true;
        }
        //not cycle mean not visited once also
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

Node* floydDetectLoop(Node* head){
    if(head == NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;
    
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow->next;

        if(slow == fast){
            cout<<"Cycle present at : "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* &head){
    //Empty list
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    // if(intersection == NULL){
    //     return NULL;
    // }
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

Node* removeLoop(Node* &head){
    if(head == NULL){
        return NULL;
    }
    Node* startofloop = getStartingNode(head);
    // if(startofloop == NULL){
    //     return head;
    // }
    Node* temp = startofloop;
    while(temp->next != startofloop){
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
}

int main(){
    Node* tail = NULL;
    
    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,4);
    print(tail);

    insertNode(tail,4,10);
    print(tail);

    //MAP
    if(detectLoop(tail)){
        cout<<"Linked list is circular "<<endl;
    }
    else{
        cout<<"Not circular "<<endl;
    }

    // Floyd cycle
    if(floydDetectLoop(tail)){
        cout<<"Linked list is circular "<<endl;
    }
    else{
        cout<<"Not circular "<<endl;
    }

    //starting loop
    Node* startloop = getStartingNode(tail);
    cout<<"Starting loop is : "<<startloop->data<<endl;

    //Removing the loop
    Node* deleteloop = removeLoop(tail);
    cout<<"After removing the loop "<<endl;
    //checking cycle is present or not
    if(floydDetectLoop(tail)){
        cout<<"Linked list is circular "<<endl;
    }
    else{
        cout<<"Not circular "<<endl;
    }

    return 0;
}