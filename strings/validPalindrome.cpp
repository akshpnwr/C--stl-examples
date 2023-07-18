#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int start = 0;
    int end = str.size() - 1;

    bool pal = true;

    while (start <= end)
    {
        if (!isalnum(str[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if (tolower(str[start]) != tolower(str[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{

    string str = "A man, a plan, a canal: Panama";

    bool res = isPalindrome(str);

    cout << res;

    return 0;
}