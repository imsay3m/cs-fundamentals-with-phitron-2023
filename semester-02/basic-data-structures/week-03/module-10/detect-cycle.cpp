#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void detectCycle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    bool flag = true;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            flag = false;
            cout << "Cycle Detected" << endl;
            break;
        }
    }
    if (flag)
    {
        cout << "Cycle Not Detected" << endl;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *tail = d;
    Node *tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    // c->next = d;
    // d->prev = c;
    // d->next = NULL;
    detectCycle(head);
    return 0;
}