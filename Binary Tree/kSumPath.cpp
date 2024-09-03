// This code is for finding the k sum path
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17
// k = 15
// k sum path to form k=15 is 1+3+11

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

void solve(Node* root, int k, vector<int>& path, int &count) {
    if(root == NULL) {
        return;
    }

    // Add the current node's value to the path
    path.push_back(root->data);

    // Recursively call for left and right subtrees
    solve(root->left, k, path, count);
    solve(root->right, k, path, count);

    // Check the number of paths that sum to k
    int sum = 0;
    for(int i = path.size() - 1; i >= 0; i--) {
        sum += path[i];
        if(sum == k) {
            count++;
        }
    }

    // Backtrack: remove the current node from the path
    path.pop_back();
}

int sumK(Node* root, int k) {
    vector<int> path;
    int count = 0;
    solve(root, k, path, count);
    return count;
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

    int k;
    cout << "Enter the value of k to find the number of paths with sum k: ";
    cin >> k;

    int count = sumK(root, k);

    cout << "Number of paths with sum " << k << " is: " << count << endl;

    return 0;
}