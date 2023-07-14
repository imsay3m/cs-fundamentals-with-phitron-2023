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
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverseList(Node *head, Node *tail)
{
    for (Node *i = head, *j = tail; i != j && i->next != j; i = i->next, j = j->prev)
    {
        swap(i->val, j->val);
    }
    swap(head->val, tail->val);
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;
    Node *tail = a;
    // Node *d = new Node(50);
    // Node *tail = d;
    head->next = a;
    a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    // c->next = d;
    // d->prev = c;
    // d->next = NULL;
    reverseList(head, tail);
    printList(head);
    return 0;
}