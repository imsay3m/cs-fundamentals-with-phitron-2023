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
void printList(Node *head) // O(N)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insertHead(Node *&head, int val) // O(1)
{
    Node *newNode = new Node(val);
    newNode->next = head; // head address
    head = newNode;       // head change
}
void insertTail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert(Node *&head, Node *&tail, int pos, int val)
{
    if (pos > size(head))
    {
        cout << "Invalid Position" << endl;
        return;
    }
    if (pos == size(head))
    {
        insertTail(head, tail, val);
    }
    if (pos == 0)
    {
        insertHead(head, val);
        return;
    }

    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i <= pos - 1; i++) // O(N)
    {
        tmp = tmp->next; // 20
    }
    newNode->next = tmp->next; // 30 address
    tmp->next = newNode;       // newNode address
    cout << endl;
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
    cout << tail->val << endl;
    printList(head);
    cout << size(head) << endl;
    insert(head, tail, 0, 101);
    printList(head);
    insertHead(head, 505);
    printList(head);
    insertTail(head, tail, 601);
    printList(head);
    cout << tail->val << endl;
    printList(head);
    return 0;
}