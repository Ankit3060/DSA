#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int tsp(vector<vector<int>>& graph, int mask, int pos, int n) {
    if (mask == (1 << n) - 1) {
        return graph[pos][0];
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        if ((mask & (1 << i)) == 0) {
            int newMask = mask | (1 << i);
            int cost = graph[pos][i] + tsp(graph, newMask, i, n);
            ans = min(ans, cost);
        }
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter the number of cities: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));

    cout << "Enter the adjacency matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }

    int mask = 1;
    int pos = 0;
    int minCost = tsp(graph, mask, pos, n);

    cout << "Minimum cost of the TSP tour: " << minCost << endl;

    return 0;
}



// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <climits>

// using namespace std;

// int tsp(vector<vector<int>>& graph, int mask, int pos, int n) {
//     if (mask == (1 << n) - 1) {
//         return graph[pos][0];
//     }

//     int ans = INT_MAX;

//     for (int i = 0; i < n; i++) {
//         if ((mask & (1 << i)) == 0) {
//             int newMask = mask | (1 << i);
//             int cost = graph[pos][i] + tsp(graph, newMask, i, n);
//             ans = min(ans, cost);
//         }
//     }

//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter the number of cities: ";
//     cin >> n;

//     vector<vector<int>> graph(n, vector<int>(n));

//     cout << "Enter the adjacency matrix: " << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cin >> graph[i][j];
//         }
//     }

//     int mask = 1;
//     int pos = 0;
//     int minCost = tsp(graph, mask, pos, n);

//     cout << "Minimum cost of the TSP tour: " << minCost << endl;

//     return 0;
// }
