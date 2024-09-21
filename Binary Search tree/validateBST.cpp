// In this code we will the tree is BST or not
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



// This is min value function
Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

// This is max value function
Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

// void inOrder(Node* root, vector<int> &ans){
//     if(root == NULL){
//         return;
//     }
    
//     inOrder(root->left,ans );
//     ans.push_back(root->data);
//     inOrder(root->right,ans);
// }

// bool isInorder(Node* root){
//     vector<int> ans;
//     inOrder(root,ans);

//     for(int i=1;i<ans.size();i++){
//         if(ans[i]<ans[i-1]){
//             return false;
//         }
//     }
//     return true;
// }

// checking the tree is BST or not
bool validateBST(Node* root, int min , int max){
    if(root == NULL){
        return true;
    }
    if(root->data > min && root->data < max){
        bool left = validateBST(root->left,min,root->data);
        bool right = validateBST(root->right,root->data,max);
        return left&&right;
    }
    else{
        return false;
    }
}

bool validBST(Node* root){
    return validateBST(root,INT_MIN,INT_MAX);
}


// Search in BST
bool seachBST(Node* root,int data){
    if(root==NULL){
        return false;
    }
    if(root->data == data){
        return true;
    }
    if(root->data > data){
        return seachBST(root->left,data);
    }else{
        return seachBST(root->right,data);
    }
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

    if(validBST(root)){
        cout<<"Tree is BST "<<endl;
    }else{
        cout<<"Tree is not valid BST "<<endl;
    }
    

    // if(isInorder(root)){
    //     cout<<"It is valid tree "<<endl;
    // }else{
    //     cout<<"It is not a valid tree "<<endl;
    // }

    return 0;
}