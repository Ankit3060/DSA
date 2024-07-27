/* This proble is about finding the max Area from binary matrix
Eg. {{0, 1, 1, 0},
    {1, 1, 1, 1},
    {1, 1, 1, 1},
    {1, 1, 0, 0}};

    Here max area is 8
    ->it is same as largest rectangle from histogram previous problem.
    ->To solve this problem we should know how to find area in histogram
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmallestElement(int *arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top()!= -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

vector<int> prevSmallestElement(int *arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        int curr = arr[i];
        while(s.top()!= -1 && arr[s.top()] >= curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}

int largestRectangle(int *heights, int n){

    vector<int>next(n);
    next = nextSmallestElement(heights,n);

    vector<int>prev(n);
    prev = prevSmallestElement(heights,n);

    int area = INT_MIN;
    for(int i=0;i<n;i++){
        int l = heights[i];

        if(next[i] == -1){
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;

        int newArea = l*b;
        area = max(area,newArea);
    }
    return area;
}

int maxAreaRectangle(int M[4][4],int n, int m){
    int area = largestRectangle(M[0],m);

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            if(M[i][j] != 0){
                M[i][j] += M[i-1][j];
            }
            else{
                M[i][j] = 0;
            }
        }
        int newArea = largestRectangle(M[i],m);
        area = max(area,newArea);
    }
    return area;
}
int main(){
    int M[4][4] = {{0, 1, 1, 0},
                   {1, 1, 1, 1},
                   {1, 1, 1, 1},
                   {1, 1, 0, 0}};
    int n = 4, m = 4;
    int result = maxAreaRectangle(M, n, m);
    cout << "The area of the largest rectangle is: " << result << endl;

    return 0;
}