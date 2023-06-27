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
    // Node head(10);//static
    Node *head = new Node(10); // dynamic
    Node *a = new Node(20);
    head->next = a; // a is an pointer of dynamic object a itself is an address
    cout << head->val << endl;
    cout << a->val << endl;
    cout << head->next->val << endl;
    return 0;
}