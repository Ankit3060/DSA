// This is for finding the Adjencency list in the graph
// Adjencency matrix mean the adjcent of the node
// This is adjencency list using MAP
// eg:  0----1
//      |   | \
//      4--3--2
// 
// Here the adject list are:
//  0 -> 1
//  1 -> 2,3
//  2 -> 1,3
//  3 -> 1,4
//  4 -> 3,0

#include<bits/stdc++.h>
using namespace std;

class Graph{
    private:
    unordered_map<int , list<int>>adj;

    public:
    void edges(int u,int v, bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<" -> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g;
    int n;
    cout<<"Enter the number of nodes "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the edges ";
    cin>>m;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.edges(u,v,0);
    }

    g.print();
    return 0;
}