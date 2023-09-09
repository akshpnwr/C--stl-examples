#include <bits/stdc++.h>
using namespace std;

bool validAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    unordered_map<char, int> mp;

    for (auto &ch : s)
        mp[ch]++;

    for (auto &ch : t)
    {
        if (mp.count(ch) == 0 || mp[ch] == 0)
            return false;
        mp[ch]--;
    }

    return true;
}

int main()
{

    cout << validAnagram("car", "rac");

    return 0;
}