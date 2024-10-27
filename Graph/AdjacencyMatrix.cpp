// This code is for Adjencency Matrix
// Adjencency Matrix mean 2D representataion of nodes and edges

#include<bits/stdc++.h>
using namespace std;
#define V 3

void initAdjMatrix(int adjMatrix[V][V]){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            adjMatrix[i][j]=0;
        }
    }
}

void edges(int adjMatrix[V][V],int u,int v){
    adjMatrix[u][v]=1;
}

void print(int adjMatrix[V][V]){
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int adjMatrix[V][V];
    initAdjMatrix(adjMatrix);

    edges(adjMatrix,0,1);
    edges(adjMatrix,1,2);
    edges(adjMatrix,2,0);

    cout<<"Adjencency Matrix "<<endl;
    print(adjMatrix);

    return 0;
}