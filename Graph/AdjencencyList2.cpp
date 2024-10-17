// This is for finding the Adjencency list in the graph
// Adjencency matrix mean the adjcent of the node
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
    public:
    vector<vector<int>> printAdj(int n, int m, vector<vector<int>>& edges){
        vector<int> ans[n];
        for(int i=0;i<m;i++){
            int u = edges[i][0];
            int v = edges[i][1];

            ans[u].push_back(v);
            ans[v].push_back(u);
        }

        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            adj[i].push_back(i);
            for(int j=0;j<ans[i].size();j++){
                adj[i].push_back(ans[i][j]);
            }
        }
        return adj;
    }
};

int main() {
    Graph g;
    int n = 5;
    int m = 6;

    vector<vector<int>> edges = {
        {0, 1}, {0, 4}, {1, 2}, {1, 3}, {2, 3}, {3, 4}
    };

    vector<vector<int>> adj = g.printAdj(n, m, edges);

    for(int i = 0; i < adj.size(); i++) {
        cout << adj[i][0] << " -> ";
        for(int j = 1; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}