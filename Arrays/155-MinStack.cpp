#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    stack<int> stk;
    stack<int> minStk;

    MinStack()
    {
        stk = {};
        minStk = {};
    }

    void push(int val)
    {
        stk.push(val);

        if (!minStk.empty())
        {
            int topVal = minStk.top();
            minStk.push(min(topVal, val));
        }

        else
            minStk.push(val);
    }

    int top()
    {
        return stk.top();
    }

    void pop()
    {
        stk.pop();
        minStk.pop();
    }

    int getMin()
    {
        return minStk.top();
    }
};

int main()
{
    MinStack *obj = new MinStack();

    obj->push(2);
    obj->push(4);
    obj->push(3);
    obj->push(1);

    obj->pop();

    cout << obj->top();

    cout << obj->getMin();

    return 0;
}