#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums{1, 2, -4, 5, -3, 6};

    int low = 0;

    for (int i = 0; i < nums.size(); i++)
        if (nums[i] < 0)
            swap(nums[low++], nums[i]);

    for (const &i : nums)
        cout << i << " ";

    return 0;
}