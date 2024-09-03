// This code is for Kth ancestor form binary tree 
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17
// let k = 2 and node = 7
// the answer is the 1

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


Node* solve(Node* root, int &k, int node){
    if(root==NULL){
        return NULL;
    }
    if(root->data == node){
        return root;
    }

    Node* leftAns = solve(root->left, k, node);
    Node* rightAns = solve(root->right, k, node);

    if(leftAns != NULL && rightAns == NULL){
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return leftAns;
    }

    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k<=0){
            k=INT_MAX;
            return root;
        }
        return rightAns;
    }

    return NULL;
}

int kAncestor(Node* root, int k, int node){
    Node* ans = solve(root,k,node);

    if(ans==NULL|| ans->data == node){
        return -1;
    }
    else{
        return ans->data;
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

    int k, node;
    cout << "Enter the value of k to find the k-th ancestor: ";
    cin >> k;
    cout << "Enter the node value to find its k-th ancestor: ";
    cin >> node;

    int ancestor = kAncestor(root, k, node);

    if (ancestor == -1)
    {
        cout << "The " << k << "-th ancestor of node " << node << " does not exist." << endl;
    }
    else
    {
        cout << "The " << k << "-th ancestor of node " << node << " is: " << ancestor << endl;
    }

    return 0;
}