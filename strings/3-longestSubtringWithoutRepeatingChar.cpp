#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int ASCII[128] = {0};

    int res = 0;
    int l = 0;

    for (int r = 0; r < s.size(); r++)
    {
        ASCII[s[r]]++;

        while (ASCII[s[r]] > 1)
        {
            ASCII[s[l]]--;
            l++;
        }

        res = max(res, r - l + 1);
    }

    return res;
}

int main()
{

    cout << lengthOfLongestSubstring("pwwkew");

    return 0;
}