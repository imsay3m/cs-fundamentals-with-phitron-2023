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
int size(Node *head) // O(N)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
void deletePos(Node *&head, int pos)
{
    if (pos >= size(head))
    {
        cout << "Invalid Position" << endl;
    }
    if (pos == 0)
    {
        Node *deleteHead = head;
        head = head->next;
        delete deleteHead;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *tail = e;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    printList(head);
    int pos;
    cin >> pos;
    deletePos(head, pos);
    printList(head);
    return 0;
}