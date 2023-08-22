#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList;
set<int> visited;

bool dfs(int crs)
{
    if (visited.count(crs))
        return false;
    if (adjList[crs].empty())
        return true;

    visited.insert(crs);

    for (auto &c : adjList[crs])
    {
        if (!dfs(c))
            return false;
    }

    visited.erase(crs);
    adjList[crs] = {};

    return true;
}

bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
{
    adjList.resize(numCourses);

    for (auto &x : prerequisites)
    {
        adjList[x[0]].push_back(x[1]);
    }

    for (int i = 0; i < numCourses; i++)
    {
        if (!dfs(i))
            return false;
    }

    return true;
}

int main()
{
    vector<vector<int>> p = {{1, 0}, {0, 1}};
    cout << canFinish(2, p);
    return 0;
}