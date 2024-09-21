// In this code we will find the predecor and successor of the particular element
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
//  In this the pred and succ of 7 is : (5 , 8)

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


void inOrder(Node* root, vector<int> &ans){
    if(root == NULL){
        return;
    }
    
    inOrder(root->left,ans );
    ans.push_back(root->data);
    inOrder(root->right,ans);
}

// This is predecor and succesor code
pair<int,int> predAndSucc(Node* root, int key){
    vector<int>ans;
    inOrder(root,ans);
    int n = ans.size();

    int pred , succ = -1;
    
    for(int i=0;i<n;i++){
        if(ans[i] == key){
            pred = ans[i-1];
            succ = ans[i+1];
            break;
        }
    }
    
    return {pred,succ};
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

    pair<int, int> predecAndSucce = predAndSucc(root, 7);

    cout << "The predecessor and successor are: "
         << predecAndSucce.first << " and " << predecAndSucce.second << endl;

    return 0;
}