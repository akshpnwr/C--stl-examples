#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows)
{

    vector<vector<int>> res;

    res.push_back({1});
    if (numRows == 1)
        return res;

    res.push_back({1, 1});
    if (numRows == 2)
        return res;

    vector<int> level;

    for (int i = 1; i < numRows - 1; i++)
    {
        level = {};
        level.push_back(1);

        for (int j = 1; j < res[i].size(); j++)
        {
            int sum = res[i][j - 1] + res[i][j];
            level.push_back(sum);
        }

        level.push_back(1);
        res.push_back(level);
    }

    return res;
}

int main()
{
    vector<vector<int>> res = generate(5);

    for (auto &item : res)
    {
        for (auto &value : item)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}