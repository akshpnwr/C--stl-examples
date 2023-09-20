#include <bits/stdc++.h>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();

    int lastDigit = digits[n - 1];

    if (lastDigit != 9)
    {
        digits[n - 1] += 1;
        return digits;
    }

    int r = n - 1;

    while (digits[r] == 9 && r >= 0)
    {
        digits[r] = 0;
        r--;
    }

    vector<int> res;

    if (r == -1)
    {
        res.push_back(1);
        for (auto &digit : digits)
        {
            res.push_back(digit);
        }

        return res;
    }
    else
        digits[r] += 1;

    return digits;
}

int main()
{
    vector<int> digits{9};
    vector<int> res = plusOne(digits);

    for (auto &digit : res)
    {
        cout << digit << ",";
    }

    return 0;
}