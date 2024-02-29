#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxCandy = candies[0];

    for (auto &candy : candies)
    {
        maxCandy = max(candy, maxCandy);
    }

    vector<bool> res;

    for (auto &candy : candies)
    {
        if (candy + extraCandies >= maxCandy)
            res.push_back(true);
        else
            res.push_back(false);
    }

    return res;
}

int main()
{
    vector<int> candies = {2, 3, 5, 1, 3};
    vector<bool> res = kidsWithCandies(candies, 3);

    for (auto val : res)
    {
        cout << val << " ";
    }

    return 0;
}