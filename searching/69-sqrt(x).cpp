#include <bits/stdc++.h>
using namespace std;

int sqrt(int x)
{

    int left = 0, right = x, mid;
    int res = 0;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        if (mid * mid > x)
        {
            right = mid - 1;
        }
        else if (mid * mid < x)
        {
            left = mid + 1;
            res = mid;
        }
        else
            return mid;
    }

    return res;
}

int main()
{

    cout << sqrt(8);
    return 0;
}