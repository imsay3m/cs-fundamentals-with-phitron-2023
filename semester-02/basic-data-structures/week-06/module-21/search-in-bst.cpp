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
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2.jabotiyo kaj
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
        // connection with parent
        p->left = myLeft;
        p->right = myRight;

        // 3. children gulu ke push koro
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
bool searchBT(Node *root, int v) // O(h)-O(logN)-O(N)
{
    // not found base case
    if (root == NULL)
    {
        return false;
    }
    // found
    if (root->val == v)
    {
        return true;
    }
    // left a jaw
    if (v < root->val)
    {
        return searchBT(root->left, v);
    }
    // right a jaw
    if (v > root->val)
    {
        return searchBT(root->right, v);
    }
}
int main()
{
    Node *root = inputTree();
    cout << "Enter the Value: ";
    int val;
    cin >> val;
    bool flag = searchBT(root, val);
    flag ? cout << "Found" : cout << "Not Found";
    return 0;
}