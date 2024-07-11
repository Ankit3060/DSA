// Palindrome in linked list 
// T.C = O(n)
// S.C = O(n)
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

bool checkPalindrome(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    while(s<=e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

bool isPalindrome(Node* &head){
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
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