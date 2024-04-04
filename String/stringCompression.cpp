//This is a program to compress the string by replacing the repeated characters with their count.
//eg. Input: ["a","a","b","b","c","c","c"] -> Output: ["a","2","b","2","c","3"]

#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &s)
{
    int count = 1, index = 0;
    char prev = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == prev)
        {
            count++;
        }
        else
        {
            s[index++] = prev;
            if (count > 1)
            {
                int start = index;
                while (count)
                {
                    s[index++] = (count % 10) + '0';
                    count /= 10;
                }
                reverse(s.begin() + start, s.begin() + index);
            }
            prev = s[i];
            count = 1;
        }
    }
    s[index++] = prev;
    if (count > 1)
    {
        int start = index;
        while (count)
        {
            s[index++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(s.begin() + start, s.begin() + index);
    }
    return index;
}
int main()
{
    vector<char> s = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int ans = compress(s);
    for (int i = 0; i < ans; i++)
    {
        cout << s[i] << " ";
    }
    return 0;
}