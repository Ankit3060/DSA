// This is flatten binary tree problem
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// flatten BT : 1 3 7 11 5 17

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderBuildTree(Node* &root) {
    queue<Node*> q;
    int data;
    cout << "Enter the data : " << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << "Enter the left data : " << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the right data : " << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

void flattenBT(Node* root){
    Node* current = root;
    while(current != NULL){
        if(current->left != NULL){
            Node* pred = current->left;
            while(pred->right != NULL){
                pred = pred->right;
            }
            pred->right = current->right;
            current->right = current->left;
            current->left = NULL;
        }
        current = current->right;
    }
}


void printFlattenedTree(Node* root) {
    while(root != NULL) {
        cout << root->data << " ";
        root = root->right;
    }
    cout << endl;
}



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

int main() {
    Node* root = NULL;

    levelOrderBuildTree(root);

    cout << "Level Order Traversal of the tree:" << endl;
    levelOrderTraversal(root);

    cout<<"Flatten binary tree is : "<<endl;
    flattenBT(root);
    printFlattenedTree(root);

    
    return 0;
}