#include <bits/stdc++.h>
#include <stack>
#include <map>
using namespace std;

bool isValid(string s)
{
    stack<char> myStack;

    map<char, char> myMap;
    myMap[')'] = '(';
    myMap['}'] = '{';
    myMap[']'] = '[';

    for (auto &c : s)
    {
        if (!myStack.empty() && myStack.top() == myMap[c])
        {
            myStack.pop();
        }
        else
        {
            myStack.push(c);
        }
    }

    if (myStack.empty())
        return true;

    return false;
}

int main()
{
    string s = "(){[]";

    bool res = isValid(s);

    cout << res;

    return 0;
}