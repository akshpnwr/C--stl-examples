#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void dfs(vector<int> &nums, vector<int> subset, int i)
{
    if (i >= nums.size())
    {
        res.push_back(subset);
        return;
    }

    subset.push_back(nums[i]);
    dfs(nums, subset, i + 1);

    subset.pop_back();
    dfs(nums, subset, i + 1);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    dfs(nums, {}, 0);

    return res;
}

int main()
{
    vector<int> nums{1, 2, 3};
    vector<vector<int>> res = subsets(nums);

    cout << "{ ";
    for (auto &level : res)
    {
        cout << "{";
        for (auto &item : level)
        {
            cout << item << " ";
        }
        cout << "}, ";
    }
    cout << "}";

    return 0;
}