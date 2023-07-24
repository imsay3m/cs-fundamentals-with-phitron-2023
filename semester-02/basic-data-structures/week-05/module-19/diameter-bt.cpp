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

int calcHeight(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int l = calcHeight(root->left);
    int r = calcHeight(root->right);
    return max(l, r) + 1;
}
/*


          1
        /   \
       2     3
      / \   / \
     4   5 6   7


*/
int calcDiameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    // diameter through root
    int lH = calcHeight(root->left);
    int rH = calcHeight(root->right);
    int currD = lH + rH + 1;
    // diameter not through root
    int lD = calcDiameter(root->left);
    int rD = calcDiameter(root->right);
    return max(currD, max(lD, rD));
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
    cout << endl;
    cout << calcDiameter(root) << endl;
    return 0;
}