#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    unordered_map<char, Node *> children;
    bool eow;

    Node()
    {
        children = {};
        eow = false;
    }
};

class Trie
{
public:
    Node *root;
    Trie()
    {
        root = new Node();
    }

    void insert(string word)
    {
        Node *cur = root;

        for (auto &ch : word)
        {
            if (!cur->children.count(ch))
            {
                Node node;
                cur->children[ch] = new Node();
            }
            cur = cur->children[ch];
        }
        cur->eow = true;
    }

    bool search(string word)
    {
        Node *cur = root;

        for (auto &ch : word)
        {
            if (!cur->children.count(ch))
                return false;
            cur = cur->children[ch];
        }

        return cur->eow;
    }

    bool startsWith(string prefix)
    {

        Node *cur = root;

        for (auto &ch : prefix)
        {
            if (!cur->children.count(ch))
                return false;
            cur = cur->children[ch];
        }

        return true;
    }
};

int main()
{
    Trie t;

    t.insert("apple");

    cout << t.search("apple") << endl;
    cout << t.startsWith("ape");

    return 0;
}