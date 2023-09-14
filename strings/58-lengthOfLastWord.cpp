#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    int len = 0, flag = 0;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (flag && s[i] == ' ')
            break;
        if (s[i] != ' ')
        {
            flag = 1;
            len++;
        }
    }

    return len;
}

int main()
{

    cout << lengthOfLastWord("  fly me   to   the moon  ");
    return 0;
}