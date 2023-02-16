#include <bits/stdc++.h>
using namespace std;

int quickSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {

        int pivot = nums[high];
        int p = low;

        for (int i = low; i < high; i++)
        {
            if (nums[i] < pivot)
            {
                swap(nums[i], nums[p]);
                p++;
            }
        }

        swap(nums[p], nums[high]);

        quickSort(nums, p + 1, high);
    }
    return (nums[high - 1] * nums[high]);
}

int main()
{
    vector<int> nums{3, 2, 1, 5, 6, 4};

    cout << quickSort(nums, 0, (nums.size() - 1));

    return 0;
}