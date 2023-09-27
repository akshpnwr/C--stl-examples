#include <bits/stdc++.h>
using namespace std;

int stringToAtoi(string s)
{
    int i = 0;

    while (s[i] == ' ')
        i++;

    bool positive = s[i] == '+';
    bool negative = s[i] == '-';

    positive ? i++ : i;
    negative ? i++ : i;

    double num = 0;

    while (i < s.size() && s[i] >= '0' && s[i] <= '9')
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    num = negative ? -num : num;

    num = num > INT_MAX ? INT_MAX : num;
    num = num < INT_MIN ? INT_MIN : num;

    return int(num);
}

int main()
{
    cout << stringToAtoi("-43 with words");
    return 0;
}