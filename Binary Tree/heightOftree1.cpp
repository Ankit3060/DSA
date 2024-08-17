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

void buildFromLevelOrder(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left data of: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right data of: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

int levelOrderTraversal(Node* root){
    if(root == NULL) return 0;

    int depth = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int levelSize = q.size();
        depth++;

        for(int i = 0; i < levelSize; i++){
            Node* temp = q.front();
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return depth;
}

int main(){
    Node* root = NULL;

    buildFromLevelOrder(root);
    int depth = levelOrderTraversal(root);
    cout << "Depth of the tree: " << depth << endl;
     // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}
