#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node a(20);
    Node b(30);
    Node c(40);
    a.next = &b;
    b.next = &c;
    cout << a.val << endl;
    cout << b.val << endl;
    cout << c.val << endl;
    return 0;
}