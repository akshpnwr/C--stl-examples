#include <bits/stdc++.h>
using namespace std;

void dfs(unordered_map<char, vector<char>> graph, char source)
{

    stack<char> myStack;
    myStack.push(source);

    char current;

    while (!myStack.empty())
    {
        current = myStack.top();
        myStack.pop();

        cout << current << endl;

        for (auto &item : graph[current])
        {
            myStack.push(item);
        }
    }
}

int main()
{
    unordered_map<char, vector<char>> g;

    g['a'] = {'c', 'b'};
    g['b'] = {'d'};
    g['c'] = {'e'};
    g['d'] = {'f'};
    g['e'] = {};
    g['f'] = {};

    dfs(g, 'a');

    return 0;
}