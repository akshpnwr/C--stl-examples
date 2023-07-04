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

int main()
{
    ListNode *l1 = NULL;
    ListNode *l2 = NULL;

    l1 = insertAtBeg(l1, 3);
    l1 = insertAtBeg(l1, 2);
    l1 = insertAtBeg(l1, 1);

    l2 = insertAtBeg(l2, 4);
    l2 = insertAtBeg(l2, 3);
    l2 = insertAtBeg(l2, 1);

    printList(l1);
    printList(l2);

    return 0;
}