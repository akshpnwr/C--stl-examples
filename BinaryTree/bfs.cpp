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

vector<vector<int>> levelOrder(Node *root)
{
    if (root == NULL)
        return {};

    queue<Node *> mq;

    vector<vector<int>> ans;

    mq.push(root);

    vector<int> level;

    while (!mq.empty())
    {
        level = {};
        int len = mq.size();
        for (int i = 0; i < len; i++)
        {
            cout << "x";
            Node *cur = mq.front();
            mq.pop();

            if (cur)
            {
                level.push_back(cur->val);
                mq.push(cur->left);
                mq.push(cur->right);
            }
        }
        if (!level.empty())
            ans.push_back(level);
    }

    return ans;
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);

    vector<vector<int>> ans = levelOrder(root);

    return 0;
}