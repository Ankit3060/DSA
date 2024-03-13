// This is book allocation problem from gfg. This is a binary search problem.
// eg. A[] = {12, 34, 67, 90} M=2 N=4 => 113

#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(int A[], int N, int M, int sol)
{
    int pageSum = 0;
    int counter = 1;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > sol)
        {
            return false;
        }
        if (pageSum + A[i] > sol)
        {
            counter++;
            pageSum = A[i];
            if (counter > M)
            {
                return false;
            }
        }
        else
        {
            pageSum += A[i];
        }
    }
    return true;
}

int findPages(int A[], int N, int M)
{
    if (M > N)
    {
        return -1;
    }
    int s = 0;
    int e = accumulate(A, A + N, 0);
    int mid = (s + e) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (isPossibleSolution(A, N, M, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    int A[] = {12, 34, 67, 90};
    int N = 4;
    int M = 2;
    cout << findPages(A, N, M) << endl;
    return 0;
}