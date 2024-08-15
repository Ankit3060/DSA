#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildtree(Node* root){
    
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the data for inserting in left of :"<<data<<endl;
    root->left = buildtree(root->left);

    cout<<"Enter the data for inserting in right of :"<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

int main(){
    Node* root = NULL;
    root = buildtree(root);
    return 0;
}