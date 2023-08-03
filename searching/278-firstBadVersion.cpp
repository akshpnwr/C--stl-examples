#include <bits/stdc++.h>
using namespace std;

bool isBadVersion(int n)
{
    if (n >= 4)
        return true;
    return false;
}

int firstBadVersion(int n)
{
    int l = 1;
    int r = n;

    while (l < r)
    {
        int mid = (l + r) / 2;

        if (isBadVersion(mid))
            r = mid;
        else
            l = mid + 1;
    }

    return l;
}

int main()
{

    int ans = firstBadVersion(5);

    cout << ans;
    return 0;
}