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

void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> mq;

    mq.push(root);

    while (!mq.empty())
    {
        Node *cur = mq.front();

        cout << cur->val << " ";

        if (cur->left)
            mq.push(cur->left);
        if (cur->right)
            mq.push(cur->right);

        mq.pop();
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    levelOrder(root);

    return 0;
}