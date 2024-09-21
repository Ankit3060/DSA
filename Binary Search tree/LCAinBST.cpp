// In this code we will find the Lowest common ancestor of BST
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
// 
//  the LCA of 8 and 21 is 10

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
// Node* LCAinBST(Node* root, Node* p, Node* q){
//     if(root == NULL){
//         return NULL;
//     }

//     if(root->data > p->data && root->data > q->data){
//         return LCAinBST(root->left, p, q);
//     }
//     if(root->data < p->data && root->data < q->data){
//         return LCAinBST(root->right,p, q);
//     }

//     return root;
// }

// This is iterative approach
Node* LCAinBST(Node* root, Node* p, Node* q){
    while(root != NULL){
        if(root->data > p->data && root->data > q->data){
            root = root->left;
        }
        else if(root->data < p->data && root->data < q->data){
            root = root->right;
        }else{
            return root;
        }
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

    Node* p = root->right;
    Node* q = root->left;

    Node* lca = LCAinBST(root, p, q);

    if (lca != NULL) {
        cout << "LCA of " << p->data << " and " << q->data << " is: " << lca->data << endl;
    } else {
        cout << "LCA does not exist" << endl;
    }

    return 0;
}