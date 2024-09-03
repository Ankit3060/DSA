// This code is for finding the lowest common ancestor
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17
// Lowest common ancestor is for 7 and 17 is = 1

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelOrderBuldTree(Node *&root)
{
    queue<Node *> q;
    int data;
    cout << "Enter the data : " << endl;
    cin >> data;
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout << "Enter the left data : " << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the right data : " << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}

Node* lca(Node* root, int n1, int n2) {
    if (root == NULL) {
        return NULL;
    }
    if (root->data == n1 || root->data == n2) {
        return root;
    }

    Node* leftAns = lca(root->left, n1, n2);
    Node* rightAns = lca(root->right, n1, n2);

    if (leftAns != NULL && rightAns != NULL) {
        return root;
    }
    else if (leftAns != NULL && rightAns == NULL) {
        return leftAns;
    }
    else {
        return rightAns;
    }
}


void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    Node *root = NULL;

    levelOrderBuldTree(root);

    cout << "Level Order Traversal of the tree:" << endl;
    levelOrderTraversal(root);

    int n1, n2;
    cout << "Enter the two nodes to find LCA: ";
    cin >> n1 >> n2;

    Node *lcaNode = lca(root, n1, n2);

    if (lcaNode != NULL)
    {
        cout << "LCA of " << n1 << " and " << n2 << " is: " << lcaNode->data << endl;
    }
    else
    {
        cout << "LCA does not exist for the given nodes." << endl;
    }

    return 0;
}