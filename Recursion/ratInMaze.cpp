// This is rat in a maze problem from GFG

#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y, vector<vector<int>>&m,int n, vector<vector<int>> visited){
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
        return true;
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>>&m,int n,int x,int y,vector<string>&ans,vector<vector<int>> visited,string path){
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    visited[x][y]=1;
    
    //For D
    int newx=x+1;
    int newy=y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('D');
        solve(m,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    //For L
    newx=x;
    newy=y-1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('L');
        solve(m,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    //For R
    newx=x;
    newy=y+1;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('R');
        solve(m,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    //For U
    newx=x-1;
    newy=y;
    if(isSafe(newx,newy,m,n,visited)){
        path.push_back('U');
        solve(m,n,newx,newy,ans,visited,path);
        path.pop_back();
    }

    visited[x][y]=0;
}

vector<string> findPath(vector<vector<int>>&m,int n){
    vector<string>ans;
    if(m[0][0]==0){
        return ans;
    }
    int srcx=0;
    int srcy=0;
    // vector<vector<int>>visited(n, vector<int>(n, 0));;
    //we can also write the visited vector as below ans above
    vector<vector<int>>visited=m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j]=0;
        }
    }
    string path="";
    solve(m,n,srcx,srcy,ans,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 1}, 
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}
                            };
    int n = 4;
    vector<string>ans = findPath(m,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}