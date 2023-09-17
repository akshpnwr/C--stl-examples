#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int minDepth(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int left = minDepth(root->left);
    int right = minDepth(root->right);

    if (left && right == 0)
        return 1 + left;
    if (left == 0 && right)
        return 1 + right;

    return 1 + min(left, right);
}

int main()
{

    TreeNode *root = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(5);
    root->right->right->right->right = new TreeNode(6);

    cout << minDepth(root);

    return 0;
}