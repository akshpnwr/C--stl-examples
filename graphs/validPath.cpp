#include <bits/stdc++.h>
using namespace std;

bool isValid(unordered_map<char, vector<char>> graph, int sr, int d)
{
    stack<char> myStack;
    myStack.push(sr);

    char current;

    while (!myStack.empty())
    {
        current = myStack.top();

        if (current == d)
            return true;

        myStack.pop();

        for (auto &neighbor : graph[current])
        {
            myStack.push(neighbor);
        }
    }

    return false;
}

bool isValidRec(unordered_map<char, vector<char>> graph, int src, int dst)
{
    if (src == dst)
        return true;

    for (auto &neighbor : graph[src])
    {
        if (isValidRec(graph, neighbor, dst))
            return true;
    }

    return false;
}

int main()
{

    unordered_map<char, vector<char>> g;

    g['f'] = {'g', 'i'};
    g['g'] = {'h'};
    g['h'] = {};
    g['i'] = {'g', 'k'};
    g['j'] = {'i'};
    g['k'] = {};

    cout << isValidRec(g, 'f', 'k');

    return 0;
}