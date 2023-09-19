#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *left;
    Node *right;

    Node(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

bool isSame(Node *p, Node *q)
{

    if (p == NULL || q == NULL)
        return p == q;

    if (p->val != q->val)
        return false;

    return isSame(p->left, q->left) && isSame(p->right, q->right) ? true : false;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    cout << isSame(root, root1);
    return 0;
}