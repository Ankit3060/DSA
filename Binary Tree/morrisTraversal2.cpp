// This is Morris Traversal problem with preorder property
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// Morris Traversal : 1 3 7 11 5 17

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

void levelOrderBuldTree(Node* &root) {
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

void morrisTraversal(Node* root){
    Node* current = root;
    while(current != NULL){
        if(current->left == NULL){
            cout<<current->data<<" ";
            current = current->right;
        }
        else{
            Node* pred = current->left;
            while(pred->right != NULL && pred->right != current){
                pred = pred->right;
            }
            if(pred->right == NULL){
                cout<<current->data<<" ";
                pred->right = current;
                current = current->left;
            }else{
                pred->right = NULL;
                current = current->right;
            }
        }
    }
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

    levelOrderBuldTree(root);

    cout << "Level Order Traversal of the tree:" << endl;
    levelOrderTraversal(root);

    cout << "Morris Traversal:" << endl;
    morrisTraversal(root);

    return 0;
}