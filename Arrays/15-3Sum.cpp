#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void getTwoSum(vector<int> &nums, int target, int cur)
{
    unordered_map<int, int> mp;

    for (int i = cur; i < nums.size(); i++)
    {
        int val = target - nums[i];
        if (mp.count(val) > 0)
        {
            res.push_back({nums[cur - 1], nums[i], val});
        }

        mp[nums[i]] = i;
    }
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;

    for (int i = 0; i < nums.size(); i++)
    {
        getTwoSum(nums, -nums[i], i + 1);
    }

    return res;
}

int main()
{

    vector<int> nums{-1, 0, 1, 2, -1, -4};

    threeSum(nums);

    for (auto &item : res)
    {
        cout << item[0] << " : " << item[1] << " : " << item[2] << endl;
    }

    return 0;
}