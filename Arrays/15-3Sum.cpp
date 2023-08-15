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
        if (nums[j] < pivot)
        {
            i++;
            swap(nums[i], nums[j]);
        }
    }

    i++;
    swap(nums[i], nums[high]);

    return i;
}

void quickSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int pi = partition(nums, low, high);

        quickSort(nums, low, pi - 1);
        quickSort(nums, pi + 1, high);
    }
}
vector<vector<int>> res;

void getTwoSum(vector<int> &nums, int target, int cur)
{
    unordered_map<int, int> mp;

    for (int i = cur; i < nums.size(); i++)
    {
        int val = target - nums[i];
        if (mp.count(val) > 0)
        {
            res.push_back({nums[cur - 1], nums[i], val});
        }

        mp[nums[i]] = i;
    }
}

vector<vector<int>> threeSum(vector<int> &nums)
{
    int l, r, sum;

    vector<vector<int>> res;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        l = i + 1;
        r = nums.size() - 1;
        while (l < r)
        {
            sum = nums[i] + nums[l] + nums[r];

            if (sum > 0)
                r--;
            if (sum < 0)
                l++;
            if (sum == 0)
            {
                res.push_back({nums[i], nums[l], nums[r]});
                l++;

                while (nums[l] == nums[l - 1] && l < r)
                    l++;
            }
        }
    }

    return res;
}

int main()
{

    vector<int> nums{-1, 0, 1, 2, -1, -4};

    quickSort(nums, 0, nums.size() - 1);

    // for (auto &num : nums)
    // {
    //     cout << num << " ";
    // }

    vector<vector<int>> res;

    res = threeSum(nums);

    for (auto &item : res)
    {
        cout << item[0] << " : " << item[1] << " : " << item[2] << endl;
    }

    return 0;
}