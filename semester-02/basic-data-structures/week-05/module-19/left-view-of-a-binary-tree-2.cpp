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
    if (root == NULL)
    {
        return {};
    }
    queue<TreeNode<int> *> q;
    q.push(root);
    vector<int> v;
    while (!q.empty())
    {
        int sz = q.size();
        for (int i = 1; i <= sz; i++)
        {
            // ber kore ana
            TreeNode<int> *p = q.front();
            q.pop();
            // jabotiyo kaj
            if (i == 1)
            {
                v.push_back(p->data);
            }
            // children ke push kora
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
    return v;
}