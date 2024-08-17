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

void buildFromLevelOrder(Node* &root){
    queue<Node*>q;
    int data;
    cout<<"Enter the data"<<endl;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left data of: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter the right data of: "<<temp->data<<endl;
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



void inOrder(Node* root, int &cnt){
    if(root==NULL){
        return;
    }

    inOrder(root->left,cnt);
    if(root->left == NULL && root->right==NULL){
        cnt++;
    }
    inOrder(root->right,cnt);
}

int numberOfLeafNode(Node* root){
    int cnt=0;
    inOrder(root,cnt);
    return cnt;
}

int main(){
    Node* root = NULL;

    buildFromLevelOrder(root);
    cout<<"\n Tree in level order : "<<endl;
    levelOrderTraversal(root);
    int leaf = numberOfLeafNode(root);
    cout << "No. of leaf in the tree is : " << leaf << endl;
     // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    return 0;
}
