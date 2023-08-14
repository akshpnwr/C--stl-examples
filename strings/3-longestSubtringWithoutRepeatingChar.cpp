#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int ASCII[256] = {0};

    int maxLen = 0;
    int temp = 0;

    for (int i = 0; i < s.size(); i++)
    {

        ASCII[s[i]]++;

        if (s[i] == s[i + 1])
            temp = 0;

        if (ASCII[s[i]] > 1)
        {
            maxLen = max(temp, maxLen);
            temp--;
            ASCII[s[i]] = 0;
            i--;
        }
        else
            temp++;
    }

    return maxLen;
}

int main()
{

    cout << lengthOfLongestSubstring("abcabcbb");

    return 0;
}