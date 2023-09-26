#include <bits/stdc++.h>
using namespace std;

int houseRobber(vector<int> nums)
{
    int rob1 = 0, rob2 = 0, temp;

    for (auto &num : nums)
    {
        temp = max(num + rob1, rob2);
        rob1 = rob2;
        rob2 = temp;
    }

    return rob2;
}

int main()
{

    vector<int> nums{2, 7, 9, 3, 1};

    cout << houseRobber(nums);

    return 0;
}