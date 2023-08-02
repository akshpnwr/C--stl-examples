#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
    Node(int x)
    {
        val = x;
        next = NULL;
    }
};

bool hasCycle(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return true;
    }

    return false;
}

int main()
{

    Node *head = new Node(3);
    Node *n1 = new Node(2);
    Node *n2 = new Node(0);
    Node *n3 = new Node(-4);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    cout << hasCycle(head);

    return 0;
}