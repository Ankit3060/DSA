#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZeroes(vector<vector<int>>&arr,int n,int m)
{
    //Making the row and col to zero
    int row[n] = {0}; 
    int col[m] = {0}; 

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i] || col[j])
            {
                arr[i][j]=0;
            }
        }
    }

    return arr;
}

int main() {
    vector<vector<int>>arr = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};   //For 2D matrix the syntax is this
    int n = arr.size();      // Number of rows
    int m = arr[0].size();   // Number of columns in the first row

    vector<vector<int>>ans = setZeroes(arr,n,m);

    cout << "The Final matrix is: \n";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}


//Leetcode Solution

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//     int n=matrix.size();
//     int m=matrix[0].size();

//     const int MAX_SIZE = 10000;

//     int row[MAX_SIZE] = {0};
//     int col[MAX_SIZE] = {0};
//     // int row[n] = {0}; 
//     // int col[m] = {0}; 

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(matrix[i][j]==0){
//                 row[i]=1;
//                 col[j]=1;
//             }
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             if(row[i] || col[j])
//             {
//                 matrix[i][j]=0;
//             }
//         }
//     }
//     }
// };