#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums, int size)
{
    while (size > 0)
    {
        for (int i = 0; i < size; i++)
        {
            if (nums[i] > nums[i + 1])
                swap(nums[i], nums[i + 1]);
        }

        size--;
    }
}

int main()
{

    vector<int> nums{-1, 45, 0, 11, -9};

    bubbleSort(nums, nums.size() - 1);

    for (const &i : nums)
        cout << i << " ";

    return 0;
}