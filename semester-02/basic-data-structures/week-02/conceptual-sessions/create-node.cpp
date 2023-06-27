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
    Node *head = new Node(1);
    Node *a = new Node(5);
    Node *b = new Node(10);
    Node *c = new Node(15);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = NULL; // optional

    return 0;
}