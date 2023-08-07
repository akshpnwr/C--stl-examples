#include <bits/stdc++.h>
#include <string>
using namespace std;

string addBinary(string a, string b)
{
    int s1 = a.size() - 1;
    int s2 = b.size() - 1;
    int d1, d2, sum, car = 0;

    string ans;

    while (s1 >= 0 || s2 >= 0)
    {
        if (s1 < 0)
            d1 = 0;
        else
            d1 = a[s1--] - '0';

        if (s2 < 0)
            d2 = 0;
        else
            d2 = b[s2--] - '0';

        sum = d1 + d2 + car;

        car = sum > 1 ? 1 : 0;

        ans = to_string(sum % 2) + ans;
    }

    if (car)
        ans = to_string(car) + ans;
    return ans;
}

int main()
{
    cout << addBinary("11", "1");

    return 0;
}