// This code is for finding the longest path sum
//        1
//       / \ 
//      3   5
//     /\   /\
//    7 11 17
// longest path sum = 1+5+17 = 23

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

void solve(Node *root,int sum,int &maxSum, int len, int &maxLen){
    if(root==NULL){
        if(len>maxLen){
            maxLen = len;
            maxSum = sum;
        }
        else if(len==maxLen){
            maxSum = max(sum,maxSum);
        }
        return;
    }

    sum += root->data;
    solve(root->left,sum,maxSum,len+1,maxLen);
    solve(root->right,sum,maxSum,len+1,maxLen);
}

int sumOfLongestRootToLeaf(Node *root)
{
    int len = 0;
    int maxLen;
    int sum = 0;
    int maxSum = INT_MIN;

    solve(root,sum,maxSum,len,maxLen);
    return maxSum;
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

    // Call the sumOfLongestRootToLeaf function
    int result = sumOfLongestRootToLeaf(root);
    cout << "Sum of the longest root-to-leaf path: " << result << endl;

    return 0;
}