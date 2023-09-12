#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{

    unordered_map<char, int> mp;

    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int n = s.size();

    int val = mp[s[n - 1]];

    for (int i = n - 2; i >= 0; i--)
    {
        if (mp[s[i]] < mp[s[i + 1]])
            val = val - mp[s[i]];
        else
            val = val + mp[s[i]];
    }

    return val;
}

int main()
{

    cout << romanToInt("MCMXCIV");
    return 0;
}