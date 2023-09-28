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

Node *build(vector<int> &nums, int left, int right)
{
    if (left > right)
        return NULL;

    int mid = (left + right) / 2;
    Node *root = new Node(nums[mid]);

    root->left = build(nums, left, mid - 1);
    root->right = build(nums, mid + 1, right);

    return root;
}

Node *createBST(vector<int> &nums)
{
    return build(nums, 0, nums.size() - 1);
}

void inorder(Node *root)
{

    if (!root)
        return;

    inorder(root->left);
    cout << root->val;
    inorder(root->right);
}

int main()
{

    vector<int> nums{-10, -3, 0, 5, 9};

    Node *root = createBST(nums);

    inorder(root);

    return 0;
}