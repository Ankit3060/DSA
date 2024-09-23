// In this code we will find the Lowest common ancestor of BST
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
// 
//  the LCA of 8 and 21 is 10

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

// This is two sum problem
void inOrder(Node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    inOrder(root->left,ans);
    ans.push_back(root->data);
    inOrder(root->right,ans);
}

bool twoSum(Node* root, int target){
    vector<int> ans;
    inOrder(root, ans);

    int l=0;
    int h= ans.size()-1;

    while(l<h){
        int sum = ans[l]+ans[h];
        if(sum == target){
            return true;
        }
        else if(sum>target){
            h--;
        }
        else{
            l++;
        }
    }
    return false;
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

    int target;
    cout<<"Enter the target sum to find the two sum "<<endl;
    cin>>target;
    if(twoSum(root,target)){
        cout<<"The tree has two sum property of number : "<<target<<endl;
    }else{
        cout<<"The number has not the two sum property of number : "<<target<<endl;
    }

    return 0;
}