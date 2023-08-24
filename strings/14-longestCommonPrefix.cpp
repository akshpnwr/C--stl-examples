#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";

        for (int i = 0; i < strs[0].size(); i++)
        {
            for (auto &str : strs)
            {
                if (i == str.size() || str[i] != strs[0][i])
                    return res;
            }
            res = res + strs[0][i];
        }

        return res;
    }
};

int main()
{
    Solution s;

    vector<string> strs = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(strs);
    return 0;
}