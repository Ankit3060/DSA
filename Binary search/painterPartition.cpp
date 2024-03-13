// This is painter partition problem from gfg. This is a binary search problem.
// eg. A[] = {5,10,30,20,15} K=3 N=5 => 35

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int k, long long mid)
{
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (arr[i] + timeSum > mid)
        {
            c++;
            timeSum = arr[i];
            if (c > k)
            {
                return false;
            }
        }
        else
        {
            timeSum += arr[i];
        }
    }
    return true;
}

long long minTime(int arr[], int n, int k)
{
    // code here
    // return minimum time
    long long s = 0;
    long long e = accumulate(arr, arr + n, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     e += arr[i];
    // }
    long long ans = -1;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (isPossible(arr, n, k, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {5,10,30,20,15};
    int n = 5;
    int k = 3;
    cout << minTime(arr, n, k) << endl;
    return 0;
}