#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void mergeArr(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int k = m + n - 1;
    int i = m - 1;
    int j = n - 1;

    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    int m = 3;
    int n = 3;

    mergeArr(nums1, m, nums2, n);

    for (auto &num : nums1)
    {
        cout << num << ' ';
    }

    return 0;
}