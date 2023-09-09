#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1, mid;

    while (l <= r)
    {

        mid = (l + r) / 2;

        if (nums[mid] == target)
            return mid;

        // left portion
        if (nums[l] <= nums[mid])
        {
            if (target > nums[mid] || target < nums[l])
                l = mid + 1;
            else
                r = mid - 1;
        }
        else
        {
            if (target < nums[mid] || target > nums[r])
                r = mid - 1;
            else
                l = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums{4, 5, 6, 7, 0, 1, 2};

    cout << search(nums, 0);
    return 0;
}