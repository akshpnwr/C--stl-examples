#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int> &nums, int k, int low, int high)
{
    int i = low - 1;
    int pivot = nums[high];

    for (int j = low; j < high; j++)
    {
        if (nums[j] <= pivot)
        {
            i++;
            swap(nums[j], nums[i]);
        }
    }

    swap(nums[i + 1], nums[high]);

    return i + 1;
}

int quickSort(vector<int> &nums, int k, int low, int high)
{
    int pivotIndex = partition(nums, k, low, high);

    if (k > pivotIndex)
        return quickSort(nums, k, pivotIndex + 1, high);
    else if (k < pivotIndex)
        return quickSort(nums, k, low, pivotIndex - 1);
    else
        return nums[pivotIndex];
}

int findKth(vector<int> nums, int k)
{
    return quickSort(nums, k, 0, nums.size() - 1);
}

int main()
{
    vector<int> nums{3, 2, 1, 5, 6, 4};

    cout << findKth(nums, nums.size() - 2);
    return 0;
}