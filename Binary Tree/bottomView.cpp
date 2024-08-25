// This is Bottom view in binary tree problem
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17 
// Botttom View: 7 3 17 5 

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

vector<int> bottomViews(Node* root) {
    map<int, int> bottomNodes;  // Map to store the bottom view nodes
    queue<pair<Node*, int>> q;
    q.push(make_pair(root, 0));  // Root node with horizontal distance 0

    vector<int> ans;
    if (root == NULL) {
        return ans;
    }

    while (!q.empty()) {
        pair<Node*, int> temp = q.front();
        q.pop();

        Node* frontNode = temp.first;
        int HD = temp.second;

        // Update the map with the latest node at the current horizontal distance
        bottomNodes[HD] = frontNode->data;

        if (frontNode->left) {
            q.push(make_pair(frontNode->left, HD - 1));
        }
        if (frontNode->right) {
            q.push(make_pair(frontNode->right, HD + 1));
        }
    }

    for (auto i : bottomNodes) {
        ans.push_back(i.second);
    }

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

    // Compute and display the Top View of the tree
    vector<int> bottomView = bottomViews(root);

    cout << "\n Bottom View of the tree:" << endl;
    for (int val : bottomView) {
        cout << val << " ";
    }
    cout << endl;
    

    return 0;
}