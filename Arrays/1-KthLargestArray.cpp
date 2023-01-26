#include <bits/stdc++.h>
using namespace std;
int main()
{

    // Using heap - O(n + klogn)
    vector<int> nums = {3, 2, 1, 5, 6, 4};

    make_heap(nums.begin(), nums.end());

    int k = 2;

    for (int i = 0; i < k - 1; i++)
    {
        pop_heap(nums.begin(), nums.end());
        nums.pop_back();
    }

    cout << nums.front();

    return 0;
}