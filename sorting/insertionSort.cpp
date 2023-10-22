#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &nums)
{

    for (int i = 1; i < nums.size(); i++)
    {
        int key = nums[i];
        int j = i - 1;
        while (key < nums[j] && j >= 0)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = key;
    }
}

int main()
{
    vector<int> nums{9, 5, 1, 4, 3};

    insertionSort(nums);

    for (auto num : nums)
    {
        cout << num << " ";
    }

    return 0;
}