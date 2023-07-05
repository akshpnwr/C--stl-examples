#include <bits/stdc++.h>
#include <list>
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

ListNode *insertAtBeg(ListNode *head, int val)
{
    ListNode *node = new ListNode(val);

    if (head == NULL)
    {
        head = node;
        return head;
    }

    node->next = head;
    head = node;

    return head;
}

void printList(ListNode *head)
{
    ListNode *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << " : ";
        temp = temp->next;
    }
    cout << endl;
}

ListNode *insertAtK(ListNode *head, int val, int k)
{
    ListNode *node = new ListNode(val);

    if (head == NULL)
    {
        head = node;
        return head;
    }

    if (k == 1)
    {

        node->next = head;
        head = node;

        return head;
    }

    ListNode *temp = head;
    for (int i = 1; i < k - 1; i++)
    {
        temp = temp->next;
    }

    node->next = temp->next;
    temp->next = node;

    return head;
}

ListNode *sortList(ListNode *l1, ListNode *l2)
{

    ListNode *dummy = new ListNode(-1);
    ListNode *tail = dummy;

    while (l1 && l2)
    {
        if (l1->val <= l2->val)
        {
            tail->next = l1;
            tail = l1;
            l1 = l1->next;
        }
        else
        {
            tail->next = l2;
            tail = l2;
            l2 = l2->next;
        }
        tail = tail->next;
    }

    if (l1)
    {
        tail->next = l1;
    }
    if (l2)
    {
        tail->next = l2;
    }

    return dummy->next;
}

int main()
{
    ListNode *l1 = NULL;
    ListNode *l2 = NULL;

    l1 = insertAtBeg(l1, 4);
    l1 = insertAtBeg(l1, 2);
    l1 = insertAtBeg(l1, 1);

    l2 = insertAtBeg(l2, 4);
    l2 = insertAtBeg(l2, 3);
    l2 = insertAtBeg(l2, 1);

    printList(l1);
    printList(l2);

    l1 = sortList(l1, l2);

    printList(l1);

    return 0;
}