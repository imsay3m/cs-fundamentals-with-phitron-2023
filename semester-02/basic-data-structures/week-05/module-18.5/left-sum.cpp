#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/
long long sum;

void preOrder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    // Check if the current node has a left child
    if (root->left != NULL)
    {
        sum = sum + root->left->data; // Add the value of the left child to the sum
    }
    preOrder(root->left);
    preOrder(root->right);
}

long long leftSum(BinaryTreeNode<int> *root)
{
    sum = 0;
    preOrder(root);
    return sum;
}