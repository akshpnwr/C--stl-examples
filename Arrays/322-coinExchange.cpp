#include <bits/stdc++.h>
using namespace std;

int coinExchange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, 1e9);

    dp[0] = 0;

    for (int i = 1; i < amount + 1; i++)
    {
        for (auto &c : coins)
        {
            if (i - c >= 0)
            {
                dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
    }

    if (dp[amount] == 1e9)
        return -1;

    return dp[amount];
}

int main()
{
    vector<int> coins = {1, 2, 5};

    cout << coinExchange(coins, 13);
    return 0;
}