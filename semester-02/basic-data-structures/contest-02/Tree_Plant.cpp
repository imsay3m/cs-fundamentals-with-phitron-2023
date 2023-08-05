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
int sumLvl(Node *root, int lvl)
{
    int sum = 0;
    queue<pair<Node *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        // line theke ber kore ana
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int level = p.second;
        // jabotiyo kaj kora
        if (lvl == level)
        {
            sum += node->val;
        }
        // children ke line a push kora
        if (node->left != NULL)
        {
            q.push({node->left, level + 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, level + 1});
        }
    }
    return sum;
}
int main()
{
    Node *root = new Node(1);
    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(2);
    Node *e = new Node(2);
    Node *f = new Node(2);
    Node *g = new Node(4);
    Node *h = new Node(4);
    // connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->left = e;
    b->right = f;
    c->left = g;
    c->right = h;
    int lvl;
    cin >> lvl;
    int s = sumLvl(root, lvl);
    cout << s;

    return 0;
}