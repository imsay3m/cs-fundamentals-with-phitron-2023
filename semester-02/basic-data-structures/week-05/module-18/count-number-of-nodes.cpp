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
int countNodes(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l + r + 1;
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
    int cnt = countNodes(root);
    cout << cnt;
    return 0;
}