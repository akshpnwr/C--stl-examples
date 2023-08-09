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

int dfs(Node *root)
{
    if (root == NULL)
        return 0;

    int left = dfs(root->left);
    int right = dfs(root->right);

    return 1 + max(left, right);
}

int maxDepth(Node *root)
{
    return dfs(root);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << maxDepth(root);
    return 0;
}