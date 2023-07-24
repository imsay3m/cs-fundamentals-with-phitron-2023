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
int countLeaf(Node *root)
{
    // leaf node NULL hoile 0 return korbe
    if (root == NULL)
    {
        return 0;
    }
    // leaf node hoile 1 return korbe
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    // leaf node na hoile left+right return korbe
    else
    {
        int l = countLeaf(root->left);
        int r = countLeaf(root->right);
        return l + r;
    }
}
Node *inputTree()
{

    int val;
    cin >> val;
    Node *root;
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
        // 1. ber kore ana
        Node *p = q.front();
        q.pop();
        // 2. jabotiyo kaj kora
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
        //  parenter shate connection kora
        p->left = myLeft;
        p->right = myRight;

        // 3. line e children push kora
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
int main()
{
    Node *root = inputTree();
    int cnt = countLeaf(root);
    cout << cnt;
    return 0;
}