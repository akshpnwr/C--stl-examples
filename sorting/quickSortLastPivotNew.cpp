#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int> &nums, int low, int high)
{
    int pivot = nums[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (nums[j] <= pivot)
        {
            i++;
            swap(&nums[i], &nums[j]);
        }
    }

    swap(&nums[high], &nums[i + 1]);

    return (i + 1);
}

void quickSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(nums, low, high);

        quickSort(nums, low, pivotIndex - 1);
        quickSort(nums, pivotIndex + 1, high);
    }
}

int main()
{

    vector<int> nums{8, 7, 6, 1, 0, 9, 2};

    quickSort(nums, 0, nums.size() - 1);

    for (auto &num : nums)
    {
        cout << num << " : ";
    }

    return 0;
}