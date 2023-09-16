#include <bits/stdc++.h>
using namespace std;

string longestPalindrome(string s)
{

    int ml = 1;
    int start, end;
    int l, r, temp;

    for (int i = 0; i < s.size(); i++)
    {
        // odd length
        l = i;
        r = i;

        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            temp = r - l + 1;

            if (temp > ml)
            {
                start = l;
                end = r;
                ml = temp;
            }

            l--;
            r++;
        }

        // even length
        l = i;
        r = i + 1;

        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            temp = r - l + 1;

            if (temp > ml)
            {
                ml = temp;
                start = l;
                end = r;
            }

            l--;
            r++;
        }
    }

    return s.substr(start, end - start + 1);
}

int main()
{

    cout << longestPalindrome("cbbd");

    return 0;
}