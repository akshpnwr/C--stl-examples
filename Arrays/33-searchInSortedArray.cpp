#include <bits/stdc++.h>
using namespace std;

int bs(vector<int> &nums, int left, int right, int target)
{
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (target > nums[mid])
        {
            return bs(nums, mid + 1, right, target);
        }
        else if (target < nums[mid])
        {
            return bs(nums, left, right - 1, target);
        }
        else
            return mid;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int rotatedAt;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < nums[i - 1])
        {
            rotatedAt = i;
        }
    }

    if (target > nums[nums.size() - 1])
    {
        return bs(nums, 0, rotatedAt - 1, target);
    }
    else
    {
        return bs(nums, rotatedAt, nums.size() - 1, target);
    }
}

int main()
{
    vector<int> nums{4, 5, 6, 7, 0, 1, 2};

    cout << search(nums, 3);
    return 0;
}