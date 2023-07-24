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
/* void leftView(Node *root)
{
    bool freq[3005] = {false};
    if (root == NULL)
    {
        return;
    }
    queue<pair<Node *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        // ber lore ana
        pair<Node *, int> p = q.front();
        q.pop();
        Node *node = p.first;
        int level = p.second;
        // jabotiyo kaj
        if (freq[level] == false)
        {
            cout << node->val << " ";
            freq[level] = true;
        }

        // children gulo line a push kora
        if (node->left != NULL)
        {
            q.push({node->left, level + 1});
        }
        if (node->right != NULL)
        {
            q.push({node->right, level + 1});
        }
    }
} */

void leftView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            Node *p = q.front();
            q.pop();

            if (i == 1)
            {
                cout << p->val << " ";
            }
            if (p->left != NULL)
            {
                q.push(p->left);
            }
            if (p->right != NULL)
            {
                q.push(p->right);
            }
        }
    }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // printLevelOrder(root);
    // rightView(root);
    leftView(root);
    return 0;
}