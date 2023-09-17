#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{

    int rows = intervals.size();

    vector<vector<int>> res = {intervals[0]};

    for (int i = 1; i < rows; i++)
    {

        if (intervals[i][0] < res.back()[1])
        {
            res.back()[1] = max(intervals[i][1], res.back()[1]);
        }
        else
            res.push_back({intervals[i][0], intervals[i][1]});
    }

    return res;
}

int main()
{
    vector<vector<int>> res;

    vector<vector<int>> intervals = {
        {1, 4}, {0, 4}};

    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    res = merge(intervals);

    for (auto &item : intervals)
    {
        cout << item[0] << ", " << item[1] << endl;
    }

    return 0;
}