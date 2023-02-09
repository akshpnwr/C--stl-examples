#include <bits/stdc++.h>
#include <map>
using namespace std;

vector<int> towSum(vector<int> nums, int target)
{
    map<int, int> h;
    int val;

    for (int i = 0; i < nums.size(); i++)
    {
        val = target - nums[i];

        if (h.count(val))
        {
            return {h[val], i};
        }
        else
            h[nums[i]] = i;
    }

    return {};
}

int main()
{

    vector<int> nums{2, 7, 11, 15, 3};

    int target = 14;

    vector<int> res = towSum(nums, target);

    for (auto &i : res)
    {
        cout << i;
    }

    return 0;
}