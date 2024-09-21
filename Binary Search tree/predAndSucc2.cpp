// In this code we will find the predecor and successor of the particular element
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
//  In this the pred and succ of 7 is : (5 , 8)

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


pair<int,int> predAndSucc(Node* root, int key){
    Node* temp = root;
    int pred , succ = -1;
    
    while(temp->data != key){
        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }else{
            pred = temp->data;
            temp = temp->right;
        }
    }

    Node* leftTree = temp->left;
    while(leftTree != NULL){
        pred = leftTree->data;
        leftTree = leftTree->right;
    }

    Node* rightTree = temp->right;
    while(rightTree != NULL){
        pred = rightTree->data;
        rightTree = rightTree->left;
    }
    
    return {pred,succ};
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

    pair<int, int> predecAndSucce = predAndSucc(root, 7);

    cout << "The predecessor and successor are: "
         << predecAndSucce.first << " and " << predecAndSucce.second << endl;

    return 0;
}