class Solution{
    private:
    bool isSafe(vector<vector<int>> &m, int n,int x, int y,vector<string> &ans,vector<vector<int>> visited, string path){
        if((x>=0 && c<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> &m, int n,int x,int y,vector<string> &ans, vector<vector<int>> visited,string path){
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }
        visied[x][y]=1;
        
        int newx=x+1;
        int newy=y;
        if(isSafe(newx,newy,n,visited,m)){
            path.push_back('D');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        newx=x;
        newy=y+1;
        if(isSafe(newx,newy,n,visited,m)){
            path.push_back('R');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        newx=x-1;
        newy=y;
        if(isSafe(newx,newy,n,visited,m)){
            path.push_back('U');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        newx=x;
        newy=y-1;
        if(isSafe(newx,newy,n,visited,m)){
            path.push_back('L');
            solve(m,n,newx,newy,ans,visited,path);
            path.pop_back();
        }
        
        visited[x][y]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        int srcx=0;
        int srcy=0;
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
};