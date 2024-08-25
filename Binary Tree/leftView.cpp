// This is Left view in binary tree problem
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// Left View: 1 3 7  

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

void solve(Node* root, vector<int>&ans, int lvl){
    if(root==NULL){
        return;
    }

    if(lvl == ans.size()){
        ans.push_back(root->data);
    }

    solve(root->left,ans,lvl+1);
    solve(root->right,ans,lvl+1);
}

vector<int> leftView(Node* root) {
    vector<int>ans;
    solve(root,ans,0);
    return ans;
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

    vector<int> leftViewResult = leftView(root);

    cout << "\nLeft View of the tree:" << endl;
    for (int val : leftViewResult) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}