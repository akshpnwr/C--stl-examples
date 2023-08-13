#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
{
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

    int dist;
    for (auto &item : points)
    {
        dist = item[0] * item[0] + item[1] * item[1];
        minHeap.push({dist, item[0], item[1]});
    }

    vector<int> temp;
    vector<vector<int>> ans;

    while (k > 0)
    {
        temp = minHeap.top();
        ans.push_back({temp[1], temp[2]});
        minHeap.pop();
        k--;
    }

    return ans;
}

int main()
{
    vector<vector<int>> points;

    points.push_back({3, 3});
    points.push_back({5, -1});
    points.push_back({-2, 4});

    int k = 2;

    vector<vector<int>> res = kClosest(points, k);

    for (auto &item : res)
    {
        cout << item[0] << " " << item[1] << endl;
    }

    return 0;
}