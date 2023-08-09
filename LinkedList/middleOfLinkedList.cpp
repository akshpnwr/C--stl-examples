#include <bits/stdc++.h>
using namespace std;

struct List
{
    int val;
    List *next;

    List(int x)
    {
        val = x;
        next = NULL;
    }
};

List *getMiddle(List *root)
{
    List *slow = root;
    List *fast = root;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

int main()
{
    List *root = new List(1);
    root->next = new List(2);
    root->next->next = new List(3);
    root->next->next->next = new List(4);
    root->next->next->next->next = new List(5);

    cout << getMiddle(root)->val;

    return 0;
}