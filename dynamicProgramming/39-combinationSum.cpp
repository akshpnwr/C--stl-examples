#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
void dfs(int i, vector<int> cur, int total, vector<int> candidates, int target)
{
    if (total == target)
    {
        res.push_back(cur);
        return;
    }
    if (i >= candidates.size() || total > target)
    {
        return;
    }

    cur.push_back(candidates[i]);

    dfs(i, cur, total + candidates[i], candidates, target);

    cur.pop_back();

    dfs(i + 1, cur, total, candidates, target);
}

vector<vector<int>> combinationSum(vector<int> candidates, int target)
{
    dfs(0, {}, 0, candidates, target);
    return res;
}

int main()
{
    vector<vector<int>> res;
    vector<int> c = {2, 3, 6, 7};

    res = combinationSum(c, 7);

    return 0;
}