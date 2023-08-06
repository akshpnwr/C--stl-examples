#include <bits/stdc++.h>
using namespace std;

int longestPalindrome(string s)
{
    if (s.size() == 1)
        return 1;

    unordered_map<char, int> mp;

    for (auto &ch : s)
        mp[ch]++;

    int ans = 0;
    int odd = 0;
    int val;

    for (auto &entry : mp)
    {

        val = entry.second;

        if (val > 1)
        {
            if (val % 2 == 0)
                ans += val;
            else
            {
                ans = ans + val - 1;
                odd++;
            }
        }
        else
            odd++;
    }

    if (odd > 0)
        ans++;

    return ans;
}

int ans = 0;
int odd = 0;
int main()
{
    cout << longestPalindrome("a");

    return 0;
}