#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "this is a string";

    int l = s.size() - 1;
    int r;

    while (l >= 0)
    {
        r = l;
        while (s[l] != ' ' && l >= 0)
            l--;

        r = l + 1;
        while (s[r] != ' ' && r < s.size())
        {
            cout << s[r];
            r++;
        }
        if (l >= 0)
        {
            cout << ' ';
            l--;
        }
    }

    return 0;
}