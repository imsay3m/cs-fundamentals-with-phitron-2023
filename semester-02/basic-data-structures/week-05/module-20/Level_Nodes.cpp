#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *inputTree()
{
    Node *root;
    int val;
    cin >> val;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        // line teke ber kora
        Node *p = q.front();
        q.pop();
        // jabotiyo kaj
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }
        // connection
        p->left = myLeft;
        p->right = myRight;
        // children ke line e push kora
        if (p->left != NULL)
        {
            q.push(p->left);
        }
        if (p->right != NULL)
        {
            q.push(p->right);
        }
    }
    return root;
}
void getLevelNodes(Node *root, int lvl)
{
    bool flag = true;
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        // line teke ber kora
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int level = p.second;
        // jabotiyo kaj kora
        if (level == lvl)
        {
            flag = false;
            cout << node->val << " ";
        }
        // children gula line e push kora
        if (node->left != NULL)
        {
            q.push({node->left, level + 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, level + 1});
        }
    }
    if (flag)
    {
        cout << "Invalid" << endl;
    }
}

int main()
{
    Node *root = inputTree();
    int lvl;
    cin >> lvl;
    getLevelNodes(root, lvl);
    return 0;
}