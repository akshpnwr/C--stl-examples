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

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (isBadVersion(mid - 1) && !isBadVersion(mid))
            return mid;
        if (isBadVersion(mid - 1) && isBadVersion(mid))
            l = mid + 1;
        if (!isBadVersion(mid - 1) && !isBadVersion(mid))
            r = mid - 1;
    }

    return l;
}

int main()
{

    int ans = firstBadVersion(5);

    cout << ans;
    return 0;
}