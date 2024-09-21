// In this code we will find the Kth smallest element from the tree
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



void inOrder(Node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    
    inOrder(root->left,ans );
    ans.push_back(root->data);
    inOrder(root->right,ans);
}

int kth(Node* root, int k){
    vector<int>ans;
    inOrder(root,ans);

    if(k > 0 && k <= ans.size()) {
        return ans[k - 1];
    } else {
        return -1;
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

    int kans = kth(root,3);
    cout<<"The kth value is"<<kans;

    return 0;
}