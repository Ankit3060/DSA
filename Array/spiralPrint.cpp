#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0) return ans; 
        int n = matrix[0].size();
        int start_row = 0;
        int end_col = n - 1;
        int end_row = m - 1;
        int start_col = 0;
        int count = 0;
        int total = m * n;
        
        while (count < total) {
            for (int i = start_col; i <= end_col && count < total; i++) {
                ans.push_back(matrix[start_row][i]);
                count++;
            }
            start_row++;
            
            for (int i = start_row; i <= end_row && count < total; i++) {
                ans.push_back(matrix[i][end_col]);
                count++;
            }
            end_col--;
            
            for (int i = end_col; i >= start_col && count < total; i--) {
                ans.push_back(matrix[end_row][i]);
                count++;
            }
            end_row--;
            
            for (int i = end_row; i >= start_row && count < total; i--) {
                ans.push_back(matrix[i][start_col]);
                count++;
            }
            start_col++;
        }
        return ans;
    }
};

// Function to print a vector
void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<int> result = solution.spiralOrder(matrix);
    printVector(result);
    return 0;
}
