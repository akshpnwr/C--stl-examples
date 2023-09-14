#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>> &res, vector<int> &nums, vector<int> &permutations, vector<bool> &used)
{
    if (permutations.size() == nums.size())
    {
        res.push_back(permutations);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (!used[i])
        {
            used[i] = true;
            permutations.push_back(nums[i]);

            backtrack(res, nums, permutations, used);

            used[i] = false;
            permutations.pop_back();
        }
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> res;
    vector<int> permutations;
    vector<bool> used(nums.size(), false);

    backtrack(res, nums, permutations, used);

    return res;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> res;
    res = permute(nums);

    for (auto &item : res)
    {
        cout << item[0] << item[1] << item[2] << endl;
    }

    return 0;
}