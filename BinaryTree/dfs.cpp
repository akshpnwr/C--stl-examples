#include <bits/stdc++.h>
using namespace std;

struct Node
{
    char val;
    Node *left;
    Node *right;
    Node(char x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

void dfs(Node *root)
{
    if (root == NULL)
        return;

    cout << root->val << " ";

    dfs(root->left);
    dfs(root->right);
}

int main()
{
    Node *root = new Node('a');

    root->left = new Node('b');
    root->right = new Node('c');
    root->left->left = new Node('d');
    root->left->right = new Node('e');
    root->right->right = new Node('f');

    dfs(root);

    return 0;
}