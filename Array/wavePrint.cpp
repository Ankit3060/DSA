// Wave print mean print the element of 2D array in wave form
// For example in the array {{1,2,3,4},{5,6,7,8},{9,10,11,12}} the wave print is 1 5 9 10 6 2 3 7 11 12 8 4
#include <bits/stdc++.h>
using namespace std;

void wavePrint(vector<vector<int>>&v){
    int m = v.size();
    int n = v[0].size();
    for(int startCol=0; startCol<n;startCol++){
        if(startCol%2==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main() {
    vector<vector<int>>v ={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    wavePrint(v);
    return 0;
}