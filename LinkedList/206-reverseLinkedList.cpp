#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};

ListNode *reverseList(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *cur = head;

    while (cur != NULL)
    {
        ListNode *forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }

    return prev;
}

void displayList(ListNode *head)
{

    ListNode *cur = head;

    while (cur != NULL)
    {
        cout << cur->val << " ";
        cur = cur->next;
    }
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    ListNode *revHead = reverseList(head);

    displayList(revHead);
    return 0;
}