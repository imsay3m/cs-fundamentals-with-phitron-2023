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
Node *convert(int *a, int l, int r)
{
    // base case
    if (l > r)
    {
        return NULL;
    }
    // mid as root
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    // left subtree
    Node *leftRoot = convert(a, l, mid - 1);
    // right subtree
    Node *rightRoot = convert(a, mid + 1, r);
    // connection
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}
void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();
        // 2. jabotiyo kaj
        cout << f->val << " ";
        // 3. tar children rakha
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    int sz;
    cin >> sz;
    int a[sz];
    for (int i = 0; i < sz; i++)
    {
        cin >> a[i];
    }
    Node *root = convert(a, 0, sz - 1);
    levelOrder(root);
    return 0;
}