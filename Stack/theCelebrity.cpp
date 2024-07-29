// This is celebrity problem
// Celebrity know nobody but everyone know celebrity
/*
Eg. {{0, 0, 1, 0},
    {0, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 1, 0}};

    we can see 2nd index know nobody but every other (0,1)index know 2nd index
    So, 2nd index is our celebrity
*/

#include <bits/stdc++.h>
using namespace std;

bool know(vector<vector<int>> &M, int a, int b, int n)
{
    return M[a][b] == 1;
}

int celebrity(vector<vector<int>> &M, int n)
{
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(i);
    }

    while (s.size() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if (know(M, a, b, n))
        {
            s.push(b);
        }
        else
        {
            s.push(a);
        }
    }

    int ans = s.top();

    bool rowCheck = false;
    int zeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[ans][i] == 0)
        {
            zeroCount++;
        }
    }
    if (zeroCount == n)
    {
        rowCheck = true;
    }

    bool colCheck = false;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (M[i][ans] == 1)
        {
            oneCount++;
        }
    }
    if (oneCount == n - 1)
    {
        colCheck = true;
    }

    if (rowCheck==true && colCheck==true)
    {
        return ans;
    }
    else
    {
        return -1;
    }
    return ans;
}

int main()
{
    vector<vector<int>> M = {{0, 0, 1, 0},
                             {0, 0, 1, 0},
                             {0, 0, 0, 0},
                             {0, 0, 1, 0}};

    int n = M.size();
    int result = celebrity(M, n);

    if (result == -1)
    {
        cout << "No celebrity found" << endl;
    }
    else
    {
        cout << "Celebrity found at index: " << result << endl;
    }

    return 0;
}
