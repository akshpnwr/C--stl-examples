#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int x)
    {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};

// void createNode(int val)
// {
//     Node *newNode = new Node(val);
// }

Node *insert(Node *root, int data)
{
    if (root == nullptr)
    {
        Node *newNode = new Node(data);
        return newNode;
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void inOrder(Node *root)
{
    if (root == nullptr)
        return;

    inOrder(root->left);
    cout << root->data;
    inOrder(root->right);
}

void preOrder(Node *root)
{
    if (root == nullptr)
        return;

    cout << root->data;
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == nullptr)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
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

    inOrder(root);
    cout << endl;
    preOrder(root);
    cout << endl;
    postOrder(root);

    return 0;
}