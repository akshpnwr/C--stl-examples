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

TreeNode *searchInBST(TreeNode *root, int val)
{

    while (root != NULL && root->val != val)
    {
        root = val > root->val ? root->right : root->left;
    }

    return root;
}

int main()
{
    TreeNode *root = new TreeNode(4);
    root->right = new TreeNode(7);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);

    TreeNode *res = searchInBST(root, 3);

    cout << res->val;

    return 0;
}