#include <bits/stdc++.h>
using namespace std;

vector<int> meats(vector<int> orders, int k)
{
    vector<int> res;

    int l = 0, r = k - 1;

    int i;
    while (r < orders.size())
    {
        if (orders[i] < 0)
        {
            res.push_back(orders[i]);
            i = l;
            l++;
            r++;
        }
        if (i == r)
        {
            res.push_back(0);
            i = l;
            l++;
            r++;
        }

        i++;
    }

    return res;
}

int main()
{

    vector<int> orders = {-11, -2, 19, 37, 64, -18};

    vector<int> res = meats(orders, 3);

    for (auto &val : res)
    {
        cout << val << " : ";
    }

    return 0;
}