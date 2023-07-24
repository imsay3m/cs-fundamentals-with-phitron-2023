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
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        if (l != -1)
        {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1)
        {
            p->right = new Node(r);
            q.push(p->right);
        }
    }
    return root;
}

void perfectBT(Node *root, int maxLvl)
{
    bool flag = false;
    if (root == NULL)
    {
        cout << "YES" << endl;
        return;
    }

    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int level = p.second;
        if (node->left == NULL || node->right == NULL)
        {
            if (level == maxLvl)
            {
                flag = true;
            }
            if (level != maxLvl)
            {
                flag = false;
                break;
            }
        }

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
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    int l = maxDepth(root->left);
    int r = maxDepth(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node *root = inputTree();
    int maxLvl = maxDepth(root);
    cout << maxLvl << endl;
    perfectBT(root, maxLvl);
    return 0;
}
