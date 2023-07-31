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
        left = nullptr;
        right = nullptr;
    }
};

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// { x, y}
// x can be 0 or 1 such that 0 indicates false while 1 indicates true
pair<bool, int> dfs(Node *root)
{
    if (root == NULL)
        return make_pair(true, 0);

    pair<bool, int> left = dfs(root->left);
    pair<bool, int> right = dfs(root->right);

    bool balanced = left.first && right.first && abs(left.second - right.second) <= 1;

    return make_pair(balanced, max(left.second, right.second) + 1);
}

bool isBalanced(Node *root)
{
    return dfs(root).first;
}

int main()
{
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    cout << isBalanced(root);

    return 0;
}