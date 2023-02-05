#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int quickSelect(int nums[], int l, int r, int k)
{
    int pivot = nums[r];
    int p = l;

    for (int i = l; i < r; i++)
    {
        if (nums[i] <= pivot)
        {
            swap(nums[i], nums[p]);
            p++;
        }
    }
    swap(nums[p], nums[r]);

    if (k > p)
        return quickSelect(nums, p + 1, r, k);

    else if (k < p)
        return quickSelect(nums, l, p - 1, k);
    else
        return nums[p];
}

int findKthLargest(int nums[], int size, int k)
{
    k = size - k;

    return quickSelect(nums, 0, (size - 1), k);
}

int main()
{

    int nums[] = {3, 2, 1, 5, 6, 4};

    int k = 2;

    int size = sizeof(nums) / sizeof(nums[0]);

    findKthLargest(nums, size, k);

    return 0;
}