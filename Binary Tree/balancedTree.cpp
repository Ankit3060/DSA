// Checking the tree is balanced or not
// It is done with recurssion
// T.C = O(N^2)

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

void levelOrderBuldTree(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left data : "<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right data : "<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}



void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int heightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int ans = max(left,right) + 1;
    return ans;
}

bool isBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    bool left =isBalanced( root->left);
    bool right = isBalanced(root->right);

    bool diff = abs(heightOfTree(root->left) - heightOfTree(root->right))<=1;

    if(left && right && diff){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* root = NULL;
    levelOrderBuldTree(root);
    levelOrderTraversal(root);
    // Example input: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    int height = heightOfTree(root);
    cout<<"Height of the tree is : "<<height<<endl;

    if(isBalanced(root)){
        cout<<"Tree is balanced "<<endl;
    }
    else{
        cout<<"Tree is not balanced "<<endl;
    }

    return 0;
}
