// Finding the diameter of the tree
// Diameter here mean longest distance between the node
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

pair<int,int> diameterFast(Node* root){
    if(root == NULL){
        pair<int,int> p = make_pair(0,0);
        return p;
    }

    pair<int,int> left = diameterFast(root->left);
    pair<int,int> right = diameterFast(root->right);

    int leftDiameter  = left.first;
    int rightDiameter  = right.first;
    int currentDiameter  = left.second+right.second+1;

    pair<int,int> ans;
    // max diameter
    ans.first = max(leftDiameter,max(rightDiameter,currentDiameter));
    // max height
    ans.second = max(left.second, right.second)+1;

    return ans;
}

int diameter(Node* root){
    return diameterFa                                                                               st(root).first;
}

int main(){
    Node* root = NULL;
    levelOrderBuldTree(root);
    levelOrderTraversal(root);
    // Example input: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    int treeDiameter = diameter(root);
    cout<<"Diameter of the tree is : "<<treeDiameter<<endl;

    return 0;
}
