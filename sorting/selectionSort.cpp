#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[minIndex])
            {
                minIndex = j;
            }
        }
        swap(nums[i], nums[minIndex]);
    }
}

int main()
{
    vector<int> nums = {20, 12, 10, 15, 2};

    selectionSort(nums);

    for (auto &num : nums)
    {
        cout << num << " ";
    }

    return 0;
}