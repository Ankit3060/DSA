// This code is for finding the max sum of the non adjacent in binary tree
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17
// let start the root with 1 => 1+7+11+17 = 36
// leave the 3, 5 as they are adjacent to the 1

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

pair<int,int> solve(Node* root){
    if(root==NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = solve(root->left);
    pair<int,int> right = solve(root->right);

    pair<int,int> res;
    
    res.first = root->data + left.second + right.second;
    res.second = max(left.first,left.second) + max(right.first,right.second);

    return res;
}

int getMax(Node* root){
    pair<int,int>ans = solve(root);

    return max(ans.first,ans.second);
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

    int maxSum = getMax(root);

    cout << "The maximum sum of non-adjacent nodes is: " << maxSum << endl;

    return 0;
}