#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mp;

        for (auto &num : nums)
        {
            mp[num]++;

            if (mp[num] > 1)
                return true;
        }

        return false;
    }
};

int main()
{

    vector<int> nums = {1, 2, 3, 4, 1};

    Solution s;

    cout << s.containsDuplicate(nums);

    return 0;
}