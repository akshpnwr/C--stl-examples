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

Node *deleteDuplicates(Node *head)
{
    Node *prev = head;
    Node *cur = head;

    unordered_map<int, int> mp;

    while (cur)
    {
        mp[cur->val]++;

        if (mp[cur->val] >= 2)
        {
            prev->next = cur->next;
            cur->next = NULL;
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }

    return head;
}

void display(Node *head)
{

    Node *temp = head;
    while (temp)
    {
        cout << temp->val;
        temp = temp->next;
    }
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(1);
    head->next->next = new Node(2);

    // display(head);

    head = deleteDuplicates(head);

    display(head);

    return 0;
}