// In this queestion we have to find the maximum distance between the cows such that the cows are placed at a distance of atleast d from each other.
// We can use binary search to solve this problem.
// eg. A[] = {1,2,4,8,9} K=3 N=5 => 3

#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int c = 1;
    int pos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++;
            pos = stalls[i];
        }
        if (c == k)
        {
            return true;
        }
    }
    return false;
}

int solve(int n, int k, vector<int> &stalls)
{

    // Write your code here
    sort(stalls.begin(), stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int n = 5, k = 3;
    cout <<"Maximum distance should the cow placed is : "<<solve(n, k, stalls)<<endl;
    return 0;
}