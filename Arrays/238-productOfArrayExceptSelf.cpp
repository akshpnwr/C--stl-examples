#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n);

    int prefix = 1;
    int postfix = 1;

    ans[0] = 1;

    for (int i = 1; i < n; i++)
    {
        prefix = prefix * nums[i - 1];
        ans[i] = prefix;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * postfix;
        postfix = postfix * nums[i];
    }

    return ans;
}

int main()
{
    vector<int> nums{1, 2, 3, 4};

    vector<int> res = productExceptSelf(nums);

    for (auto &val : res)
    {
        cout << val << " ";
    }

    return 0;
}