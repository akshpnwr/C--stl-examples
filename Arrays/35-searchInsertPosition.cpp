#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int l = 0, r = nums.size() - 1, mid;

    while (l <= r)
    {
        mid = (l + r) / 2;

        if (target == nums[mid])
            return mid;
        else if (target > nums[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }

    return l;
}
int main()
{
    vector<int> nums = {1, 3, 4, 6};
    cout << searchInsert(nums, 5);
    return 0;
}