// This code is for finding the Zig Zag from the binary tree
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// zigzag : 1 5 3 7 11 17 

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

vector<int> zigzag(Node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int size = q.size();
        vector<int> res(size);

        for (int i = 0; i < size; i++) {
            Node* frontNode = q.front();
            q.pop();

            int index = leftToRight ? i : size - i - 1;
            res[index] = frontNode->data;

            if (frontNode->left) {
                q.push(frontNode->left);
            }
            if (frontNode->right) {
                q.push(frontNode->right);
            }
        }
        leftToRight = !leftToRight;

        for (auto i : res) {
            ans.push_back(i);
        }
    }
    return ans;
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


int main() {
    Node* root = NULL;

    levelOrderBuldTree(root);

    cout << "Level Order Traversal of the tree:" << endl;
    levelOrderTraversal(root);

    // Zigzag traversal
    vector<int> zigzagTraversal = zigzag(root);

    cout << "Zigzag Traversal of the tree:" << endl;
    for (int val : zigzagTraversal) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
