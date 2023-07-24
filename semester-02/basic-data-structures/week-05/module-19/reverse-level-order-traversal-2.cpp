/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> v;
    if (root == NULL)
    {
        return {};
    }
    queue<TreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        // line teke ber kora
        TreeNode<int> *p = q.front();
        q.pop();
        // jabotiyo kaj
        v.push_back(p->val);
        // children gulo line a push kora
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }
    reverse(v.begin(), v.end());
    return v;
}