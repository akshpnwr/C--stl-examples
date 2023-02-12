#include <bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int> nums)
{
    int maxSub = nums[0];
    int curSum = 0;

    for (const &i : nums)
    {
        if (curSum < 0)
            curSum = 0;

        curSum += i;
        maxSub = max(maxSub, curSum);
    }

    return maxSub;
}

int main()
{
    vector<int> nums{5, 4, -1, 7, 8};

    cout << maxSubarray(nums);

    return 0;
}