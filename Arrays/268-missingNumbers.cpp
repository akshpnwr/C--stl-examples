#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int sum = (n * (n + 1)) / 2;

    for (auto &num : nums)
    {
        sum = sum - num;
    }

    return sum;
}

int main()
{
    vector<int> nums = {3, 0, 1};
    cout << missingNumber(nums);
    return 0;
}