#include <bits/stdc++.h>
using namespace std;

void bfs(unordered_map<char, vector<char>> graph, char source)
{

    queue<char> myQueue;

    myQueue.push(source);

    char current;

    while (!myQueue.empty())
    {
        current = myQueue.front();
        myQueue.pop();

        cout << current << endl;

        for (auto &neighbor : graph[current])
        {
            myQueue.push(neighbor);
        }
    }
}

int main()
{
    unordered_map<char, vector<char>> g;

    g['a'] = {'b', 'c'};
    g['b'] = {'d'};
    g['c'] = {'e'};
    g['d'] = {'f'};
    g['e'] = {};
    g['f'] = {};

    bfs(g, 'a');

    return 0;
}