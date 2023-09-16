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

Node *insertAtEnd(Node *head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
        return newNode;

    Node *ptr = head;

    while (ptr->next)
    {
        ptr = ptr->next;
    }

    ptr->next = newNode;

    return head;
}

void display(Node *head)
{

    Node *ptr = head;

    while (ptr)
    {
        cout << ptr->val;
        ptr = ptr->next;
    }
}

Node *sumOfAltVal(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *prev = slow;
    Node *cur = slow->next;
    prev->next = NULL;

    while (cur)
    {
        Node *forward = cur->next;
        cur->next = prev;
        prev = cur;
        cur = forward;
    }

    Node *front = head;
    Node *rear = prev;

    while (front != rear)
    {
        int sum = front->val + rear->val;
        front->val = sum;
        rear->val = sum;

        front = front->next;
        rear = rear->next;
    }

    Node *temp = NULL;
    Node *cur2 = prev;

    while (cur2 != slow)
    {
        Node *forward = cur2->next;
        cur2->next = temp;
        temp = cur2;
        cur2 = forward;
    }

    slow->next = temp;
    return head;
}

int main()
{
    Node *head = NULL;
    head = insertAtEnd(head, 1);

    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 5);

    display(head);

    cout << endl;

    Node *res = sumOfAltVal(head);

    display(res);
    return 0;
}