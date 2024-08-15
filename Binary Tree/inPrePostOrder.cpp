//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// Inoder : 7 3 11 1 17 5
// Preorder : 1 3 7 11 5 17
// Postorder : 7 11 3 17 5 1

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    //Constructor
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root){
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting in left of :"<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter the data for inserting in right of :"<<endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = NULL;
    root = buildTree(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Printing the In order traversal "<<endl;
    inOrder(root);

    cout<<"\n Printing the Pre order traversal "<<endl;
    preOrder(root);

    cout<<"\n Printing the Post order traversal "<<endl;
    postOrder(root);
    return 0;
}