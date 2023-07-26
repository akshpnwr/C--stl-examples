#include <iostream>
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

Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        Node *newNode = new Node(val);
        return newNode;
    }
    if (val > root->val)
    {
        root->right = insert(root->right, val);
    }
    if (val < root->val)
    {
        root->left = insert(root->left, val);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->val;
    inorder(root->right);
}

Node *invertTree(Node *root)
{
    if (root == nullptr)
        return root;

    else
    {

        invertTree(root->left);
        invertTree(root->right);

        Node *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }

    return root;
}

int main()
{
    Node *root = nullptr;
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 9);
    root = insert(root, 2);
    root = insert(root, 5);
    root = insert(root, 8);
    root = insert(root, 10);

    inorder(root);
    cout << endl;

    root = invertTree(root);

    inorder(root);

    return 0;
}