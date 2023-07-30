#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> nums, int val)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (nums[mid] == val)
            return mid;
        else if (val > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6};

    int ans = binarySearch(nums, 4);

    cout << "answer : " << ans;
    return 0;
}