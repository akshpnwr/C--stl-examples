#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    vector<Node *> nbrs;
    Node()
    {
        val = 0;
        nbrs = vector<Node *>();
    }
    Node(int _val)
    {
        val = _val;
        nbrs = vector<Node *>();
    }
    Node(int _val, vector<Node *> _nbrs)
    {
        val = _val;
        nbrs = _nbrs;
    }
};

class Graph
{

public:
    vector<vector<Node *>> adjList;
    Graph(vector<vector<Node *>> edges)
    {
        for (auto &edge : edges)
        {
            adjList.push_back({edge[0], edge[1], edge[2]});
        }
    };
};

vector<vector<int>> printGraph(Graph g)
{
    vector<vector<int>> ans;
    vector<int> temp;

    for (int i = 0; i < 4; i++)
    {
        temp = {};

        for (int j = 1; j < g.adjList[i].size(); j++)
        {
            temp.push_back(g.adjList[i][j]->val);
        }

        ans.push_back(temp);
    }

    return ans;
}

int main()
{

    Node *one = new Node(1);
    Node *two = new Node(2);
    Node *three = new Node(3);
    Node *four = new Node(4);

    Graph g({{one, two, four},
             {two, one, three},
             {three, two, four},
             {four, one, three}});

    vector<vector<int>> ans = printGraph(g);

    for (auto &item : ans)
    {
        cout << "(" << item[0] << ", " << item[1] << "), ";
    }

    return 0;
}