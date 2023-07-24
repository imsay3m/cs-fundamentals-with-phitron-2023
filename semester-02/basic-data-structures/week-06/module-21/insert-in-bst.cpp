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
void insertBT(Node *&root, int x) // O(h)-O(NlogN)-O(N*N)
{
    if (root == NULL)
    {
        // without derefrencing, thats why we are taking root reference as parameter
        root = new Node(x);
        return;
    }
    if (x < root->val)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insertBT(root->left, x);
        }
    }
    if (x > root->val)
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insertBT(root->right, x);
        }
    }
}
int main()
{
    Node *root = inputTree();
    cout << "Enter The Value: ";
    int x;
    cin >> x;
    insertBT(root, x);
    cout << "Enter The Value: ";
    cin >> x;
    insertBT(root, x);
    cout << "Enter The Value: ";
    cin >> x;
    insertBT(root, x);
    cout << "Enter The Value: ";
    cin >> x;
    insertBT(root, x);
    levelOrder(root);
    return 0;
}