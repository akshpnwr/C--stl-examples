#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{

    int ml = 1;
    int start, end;
    int l, r;

    for (int i = 0; i < s.size(); i++)
    {
        l = i - 1;
        r = i + 1;

        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            int temp = r - l + 1;

            if (temp > ml)
            {
                start = l;
                end = r;
                ml = temp;
            }

            l--;
            r++;
        }
    }

    return s.substr(start, end - start + 1);
}

int main()
{

    cout << longestPalindrome("babab");

    return 0;
}