#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

int nodeLevel(TreeNode<int> *root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 1}); // make_pair(root,1)
    while (!q.empty())
    {
        // line theke ber kore ana
        pair<TreeNode<int> *, int> p = q.front();
        q.pop();
        TreeNode<int> *node = p.first;
        int level = p.second;
        // jabotiyo kaj kora
        if (node->val == searchedValue)
        {
            return level;
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
}
