#include <bits/stdc++.h>
#include <map>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    int index = 0;
    int val;

    map<int, int> hashMap;

    for (const auto &num : nums)
    {
        val = target - num;

        if (hashMap.count(val) > 0)
        {
            return {hashMap[val], index};
        }
        else
        {
            hashMap[num] = index;
        }

        index++;
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};

    vector<int> res = twoSum(nums, 13);

    for (const auto &i : res)
    {
        cout << i << "\n";
    }
}