// Checking the tree is identical or not
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

bool isIdentical(Node *r1, Node *r2)
{
        if(r1==NULL && r2==NULL){
            return true;
        }
        if(r1==NULL && r2!=NULL){
            return false;
        }
        if(r1!=NULL && r2==NULL){
            return false;
        }
        
        bool left = isIdentical(r1->left,r2->left);
        bool right = isIdentical(r1->right, r2->right);
        bool value = r1->data == r2->data;
        
        if(left && right && value){
            return true;
        }else{
            return false;
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



int main(){
    Node* root1 = NULL;
    Node* root2 = NULL;

    cout << "Build first tree:" << endl;
    levelOrderBuldTree(root1);
    cout << "Build second tree:" << endl;
    levelOrderBuldTree(root2);

    cout << "First tree level order traversal:" << endl;
    levelOrderTraversal(root1);

    cout << "Second tree level order traversal:" << endl;
    levelOrderTraversal(root2);

    if(isIdentical(root1, root2)){
        cout << "The trees are identical." << endl;
    } else {
        cout << "The trees are not identical." << endl;
    }

    return 0;
}

