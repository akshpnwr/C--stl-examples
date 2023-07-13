#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> prices = {7, 5, 3, 6, 4, 1};

    int min = prices[0];
    int minIndex = 0, index = 0;
    for (auto &price : prices)
    {
        if (price < min)
        {
            min = price;
            minIndex = index;
        }
        index++;
    }

    cout << "Min Value : " << min << endl
         << "Index : " << minIndex;

    if (minIndex == prices.size() - 1)
    {
        cout << "\nNo transactions";
        return 0;
    }

    int max = prices[index + 1];
    int maxIndex = index + 1;

    for (int i = minIndex; i < prices.size(); i++)
    {
        if (max < prices[i])
        {
            max = prices[i];
            maxIndex = i;
        }
    }

    cout << endl
         << "Max Value : " << max << endl
         << "Index : " << maxIndex;

    cout << "\nBuy at day : " << minIndex + 1;
    cout << "\nSell at day : " << maxIndex + 1;

    return 0;
}