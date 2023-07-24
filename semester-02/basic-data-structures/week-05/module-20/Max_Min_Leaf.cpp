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
vector<int> leafNodes(Node *root, vector<int> &v)
{

    if (root == NULL)
    {
        return {};
    }
    if (root->left == NULL && root->right == NULL)
    {
        v.push_back(root->val);
    }
    leafNodes(root->left, v);
    leafNodes(root->right, v);
    return v;
}

int main()
{
    Node *root = inputTree();
    vector<int> v;
    leafNodes(root, v);
    sort(v.begin(), v.end());
    int mx = v.back();
    int mn = v.front();
    cout << mx << " " << mn;
    return 0;
}