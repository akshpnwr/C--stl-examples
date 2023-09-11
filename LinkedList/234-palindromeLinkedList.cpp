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

bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    ListNode *prev = NULL;

    while (slow)
    {
        ListNode *forward = slow->next;
        slow->next = prev;
        prev = slow;
        slow = forward;
    }

    ListNode *left = head;
    ListNode *right = prev;

    while (right)
    {
        if (left->val != right->val)
            return false;
        left = left->next;
        right = right->next;
    }

    return true;
}

int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(1);

    cout << isPalindrome(head);

    return 0;
}