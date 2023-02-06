#include <bits/stdc++.h>
using namespace std;

int quickSelect(int nums[], int l, int r, int k)
{

    int pivot = nums[r];
    int p = 0;

    for (int i = 0; i < r; i++)
    {
        if (nums[i] < pivot)
        {
            swap(nums[i], nums[p]);
            p++;
        }
    }

    swap(nums[p], nums[r]);

    if (k < p)
        return quickSelect(nums, l, p - 1, k);
    else if (k > p)
        return quickSelect(nums, p + 1, r, k);
    else
        return nums[p];
}

int findKthSmallest(int nums[], int size, int k)
{
    return quickSelect(nums, 0, size - 1, k);
}

int main()
{

    int nums[] = {3, 2, 1, 5, 6, 4};

    int size = sizeof(nums) / sizeof(nums[0]);

    int k = 2; // Second smallest

    // k - 1 because index starts at 0 so second smallest will be at index 1
    cout << findKthSmallest(nums, size, k - 1);

    return 0;
}