#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *head = NULL;

void printList()
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }

    cout << "NULL";
}

void insertAtBeg(int data)
{

    Node *node = new Node(data);

    if (head == NULL)
    {
        head = node;
        return;
    }

    node->next = head;
    head = node;
}

void insertAtEnd(int data)
{
    Node *node = new Node(data);

    Node *ptr = head;

    while (ptr->next != NULL)
        ptr = ptr->next;

    ptr->next = node;
}

void deleteAtBeg()
{
    if (head == NULL)
        return;

    Node *to_delete = head;

    head = head->next;
    delete to_delete;
}

void deleteAtEnd()
{
    if (head == NULL)
        return;

    Node *ptr = head;
    Node *prev = head;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    prev->next = NULL;

    delete ptr;
}

void insertAtK(int data, int k)
{
    Node *node = new Node(data);
    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *ptr = head;
    for (int i = 1; i < k - 1; i++)
    {
        ptr = ptr->next;
    }

    node->next = ptr->next;
    ptr->next = node;
}

int main()
{

    insertAtBeg(30);
    insertAtBeg(20);
    insertAtBeg(10);

    insertAtEnd(40);

    insertAtK(25, 3);

    printList();

    return 0;
}