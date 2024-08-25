// This is boundary traversal problem
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// Boundary Traverse : 1 3 7 11 17 5

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

void leftTraverse(Node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }
    ans.push_back(root->data);

    if (root->left) {
        leftTraverse(root->left, ans);
    } else {
        leftTraverse(root->right, ans);
    }
}

void traverseLeaf(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return;
    }
    if (root->left == NULL && root->right == NULL) {
        ans.push_back(root->data);
        return;
    }

    traverseLeaf(root->left, ans);
    traverseLeaf(root->right, ans);
}

void rightTraverse(Node* root, vector<int>& ans) {
    if (root == NULL || (root->left == NULL && root->right == NULL)) {
        return;
    }

    if (root->right) {
        rightTraverse(root->right, ans);
    } else {
        rightTraverse(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> boundaryTraversal(Node* root) {
    vector<int> ans;
    if (root == NULL) {
        return ans;
    }
    ans.push_back(root->data);

    // Left Traversal
    leftTraverse(root->left, ans);

    // Traverse Leaf Nodes
    // a. left subtree
    traverseLeaf(root->left, ans);
    // b. right subtree
    traverseLeaf(root->right, ans);

    // Right Traversal
    rightTraverse(root->right, ans);

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

    // Boundary Traversal
    vector<int> boundary = boundaryTraversal(root);

    cout << "Boundary Traversal of the tree:" << endl;
    for (int val : boundary) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
