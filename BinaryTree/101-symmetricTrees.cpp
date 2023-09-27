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

bool isMirror(Node *left, Node *right)
{
    if (left == NULL && right == NULL)
        return true;
    if (left == NULL || right == NULL)
        return false;

    return left->val == right->val && isMirror(left->left, right->right) && isMirror(left->right, right->left);
}

bool isSymmetric(Node *root)
{
    if (root == NULL)
        return true;
    return isMirror(root->left, root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(4);
    root->right->right = new Node(3);

    cout << isSymmetric(root) << endl;

    return 0;
}
