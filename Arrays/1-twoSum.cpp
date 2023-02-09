#include <bits/stdc++.h>
#include <map>
using namespace std;
int main()
{

    vector<int> nums{2, 7, 11, 15, 3};

    int target = 10, val;

    // int a, b;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i + 1; j < nums.size(); j++)
    //     {
    //         if ((nums[i] + nums[j]) == target)
    //         {
    //             a = i;
    //             b = j;
    //             break;
    //         }
    //     }
    // }

    // cout << a << b;

    map<int, int> h;

    for (int i = 0; i < nums.size(); i++)
    {
        val = target - nums[i];

        if (h.count(val))
        {
            return {h[val], i};
        }
        else
            h[val] = i;
    }

    return 0;
}