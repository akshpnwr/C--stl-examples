#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int low = 0;
    int right = nums.capacity() - 1;
    int i = 0;
    while (i <= right)
    {
        if (nums.at(i) == 0)
        {
            int temp = nums.at(low);
            nums.at(low) = nums.at(i);
            nums.at(i) = temp;
            low++;
        }
        else if (nums.at(i) == 2)
        {
            int temp = nums.at(right);
            nums.at(right) = nums.at(i);
            nums.at(i) = temp;
            right--;
            // Special case refer neetcode 75 video for explanation
            i--;
        }
        i++;
    }

    for (const &i : nums)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> nums{2, 0, 2, 1, 1, 0};

    sortColors(nums);

    return 0;
}