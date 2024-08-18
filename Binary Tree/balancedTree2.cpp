// Checking the tree is balanced or not
// It is done with recurssion
// T.C = O(N)

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

void levelOrderBuldTree(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left data : "<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right data : "<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}



void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}



pair<bool,int> isBalancesFast(Node* root){
        if(root==NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        
        pair<bool,int> left = isBalancesFast(root->left);
        pair<bool,int> right = isBalancesFast(root->right);
        
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second-right.second)<=1;
        
        pair<bool,int> ans;
        ans.second = max(left.second,right.second)+1;
        
        if(leftAns && rightAns && diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
}


bool isBalanced(Node* root){
    return isBalancesFast(root).first;
}

int main(){
    Node* root = NULL;
    levelOrderBuldTree(root);
    levelOrderTraversal(root);
    // Example input: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1


    if(isBalanced(root)){
        cout<<"Tree is balanced "<<endl;
    }
    else{
        cout<<"Tree is not balanced "<<endl;
    }

    return 0;
}
