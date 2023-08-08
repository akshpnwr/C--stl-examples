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

int ans = 0;

int dfs(Node *root)
{
    if (root == NULL)
        return -1;

    int left = dfs(root->left);
    int right = dfs(root->right);

    ans = max(ans, left + right + 2);

    return 1 + max(left, right);
}

int getDiameter(Node *root)
{
    dfs(root);
    return ans;
}

int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << getDiameter(root);

    return 0;
}