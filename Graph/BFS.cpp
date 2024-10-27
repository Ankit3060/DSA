#include<bits/stdc++.h>
using namespace std;

void prepAdj(unordered_map<int,set<int>> &adjList,vector<vector<int>> &edges){
    for(int i=0;i<edges.size();i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}

void bfs(unordered_map<int,set<int>> &adjList,unordered_map<int,bool>&visited,vector<int> &ans, int nodes){
    queue<int>q;
    q.push(nodes);
    visited[nodes]= 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for(auto i:adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &edges){
    vector<int> ans;
    unordered_map<int,set<int>> adjList;
    unordered_map<int,bool>visited;

    prepAdj(adjList,edges);

    for(int i=0;i<n;i++){
        if(!visited[i]){
            bfs(adjList,visited,ans,i);
        }
    }
    return ans;
}
int main(){
    int n = 8;
    vector<vector<int>> adj = {
        {0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 7}, {2, 5}, {3, 6}
    };
    
    vector<int> traversal = bfsTraversal(n, adj);
    
    for(int i : traversal) {
        cout << i << " ";
    }
    return 0;
}