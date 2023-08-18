#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    int l = 0;
    int r = numbers.size() - 1;
    int sum;
    while (l < r)
    {
        sum = numbers[l] + numbers[r];

        if (sum == target)
            break;
        if (sum > target)
            r--;
        if (sum < target)
            l++;
    }

    return {++l, ++r};
}

int main()
{
    vector<int> nums{2, 7, 11, 15};

    vector<int> res = twoSum(nums, 9);

    for (auto &i : res)
        cout << i << " ";

    return 0;
}