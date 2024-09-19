// This is searching of binary search tree
// In this code we will find the particular value present or not
// In this code we have done both iterative and recursive approach

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};


void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// This is recursive approach
bool searchBST(Node* root,int data){
    if(root == NULL){
        return false;
    }
    if(root->data == data){
        return true;
    }

    if(root->data > data){
        return searchBST(root->left,data);
    }else{
        return searchBST(root->right,data);
    }
}

// This is iterative approach
bool searchBST2(Node* root, int data){

    while(root != NULL){
        if(root->data == data){
            return true;
        }
        else if(root->data > data){
            root = root->left;
        }else{
            root = root->right;
        }
    }
    return false;
}

Node* inseretBST(Node* root, int data){
    // base case
    if(root == NULL){
        root = new Node(data);
        return root;
    }
    
    // left
    if(root->data > data){
        root->left = inseretBST(root->left,data);
    }else{
        // right
        root->right = inseretBST(root->right,data);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        root = inseretBST(root,data);
        cin>>data;
    }
}

int main(){
    Node* root = NULL;

    cout<<"Enter the data to create the BST"<<endl;
    takeInput(root);

    cout<<"Printing the BST"<<endl;
    levelOrderTraversal(root);

    int x;
    cout<<"Enter the data you want to search "<<endl;
    cin>>x;

    // 10 8 21 7 27 5 4 3 -1 

    if(searchBST(root,x)){
        cout<<"Data is present"<<endl;
    }else{
        cout<<"Data is not present"<<endl;
    }

    if(searchBST2(root,x)){
        cout<<"Data is present"<<endl;
    }else{
        cout<<"Data is not present"<<endl;
    }

    return 0;
}