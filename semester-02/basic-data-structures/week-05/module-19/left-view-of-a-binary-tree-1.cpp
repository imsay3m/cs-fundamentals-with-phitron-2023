#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int> v;
    bool freq[3005] = {false};
    if (root == NULL)
    {
        return v;
    }
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 1});
    while (!q.empty())
    {
        // ber lore ana
        pair<TreeNode<int> *, int> p = q.front();
        q.pop();
        TreeNode<int> *node = p.first;
        int level = p.second;
        // jabotiyo kaj
        if (freq[level] == false)
        {
            v.push_back(node->data);
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
    return v;
}