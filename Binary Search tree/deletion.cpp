// In this code we will delete values from the tree
// 10 8 21 7 27 5 4 3 -1 (it will take input until -1 given)
//                   10
//                   / \
//                  8   21
//                 /      \
//                7        27
//               /          
//              5
//             /
//            4
//           /
//          3

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



// This is min value function
Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// This is max value function
Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}



// Deletion
Node* deleteBST(Node* root,int data){
    if(root==NULL){
        return root;
    }

    // the root found
    if(root->data == data){
        // 0 child
        if(root->right == NULL && root->left == NULL){
            delete root;
            return NULL;
        }

        // 1 child
        // left child present and right absent
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // right child present and left absent
        if(root->right != NULL && root->left == NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minValue(root->right)->data;
            root->data = mini;
            root->right = deleteBST(root->right,mini);
            return root;
        }
        // or for 2 child we can also write in this way
        // if(root->right != NULL && root->left != NULL){
        //     int maxi = maxValue(root->left)->data;
        //     root->data = maxi;
        //     root->left = deleteBST(root->left,maxi);
        //     return root;
        // }
    }

    // data is less then root
    else if(root->data > data){
        root->left = deleteBST(root->left,data);
    }else{
        root->right = deleteBST(root->right,data);
    }
    return root;
}


// Search in BST
bool seachBST(Node* root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data == data){
        return true;
    }
    if(root->data > data){
        return seachBST(root->left,data);
    }else{
        return seachBST(root->right,data);
    }
}



Node* inseretBST(Node* root, int data){
    // base case
    if(root==NULL){
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

    // 10 8 21 7 27 5 4 3 -1 

    cout<<"Max value from the tree is : "<<maxValue(root)->data<<endl;
    cout<<"Min vlaue from the tree is : "<<minValue(root)->data<<endl;

    // Deleting a node from BST
    int dataToDelete;
    cout << "Enter the value to delete from BST: ";
    cin >> dataToDelete;

    root = deleteBST(root, dataToDelete);

    cout << "BST after deletion:" << endl;
    levelOrderTraversal(root);

    cout<<"Max value from the tree is : "<<maxValue(root)->data<<endl;
    cout<<"Min vlaue from the tree is : "<<minValue(root)->data<<endl;

    return 0;
}