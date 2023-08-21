#include <bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> &tokens)
{
    stack<int> stk;
    char ch;

    for (int i = 0; i < tokens.size(); i++)
    {
        ch = tokens[i][0];

        if (isdigit(ch))
        {
            stk.push(stoi(tokens[i]));
        }
        else
        {
            int n1 = stk.top();
            stk.pop();
            int n2 = stk.top();
            stk.pop();

            if (ch == '+')
                stk.push(n2 + n1);
            if (ch == '-')
                stk.push(n2 - n1);
            if (ch == '*')
                stk.push(n2 * n1);
            if (ch == '/')
                stk.push(n2 / n1);
        }
    }

    return stk.top();
}
int main()
{
    vector<string> tokens = {"4", "13", "5", "/", "+"};

    cout << evalRPN(tokens);
    return 0;
}