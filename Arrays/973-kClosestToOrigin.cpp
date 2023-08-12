#include <bits/stdc++.h>
using namespace std;

void kClosest(vector<vector<int>> &points, int k)
{
    int size = points.size();
    vector<int> dist = points[0];
    int temp1, temp2;

    for (int i = 1; i < points.size(); i++)
    {
        temp1 = dist[0] * dist[0] + dist[1] * dist[1];
        temp2 = points[i][0] * points[i][0] + points[i][1] * points[i][1];

        if (temp2 < temp1)
            dist = points[i];
    }

    for (auto &val : dist)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<vector<int>> points;

    points.push_back({3, 3});
    points.push_back({5, -1});
    points.push_back({-2, 4});

    int k = 1;

    kClosest(points, k);
    return 0;
}