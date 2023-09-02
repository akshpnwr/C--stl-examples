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

void inOrder(Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    cout << root->val;
    inOrder(root->right);
}

bool valid(Node *root, int left, int right)
{
    if (root == NULL)
        return true;

    if (left > root->val || right < root->val)
        return false;

    return (valid(root->left, left, root->val) && valid(root->right, root->val, right));
}

bool isValidBST(Node *root)
{
    return valid(root, LONG_MIN, LONG_MAX);
}

int main()
{
    Node *root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    inOrder(root);

    cout << endl
         << isValidBST(root);
    return 0;
}