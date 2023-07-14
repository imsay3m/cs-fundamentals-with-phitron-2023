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
void printReverse(Node *tail) // O(N)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head) // O(N)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void insertHead(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node *tmp = head;
    newNode->next = tmp;
    tmp->prev = newNode;
    head = newNode;
}
void insertTail(Node *&head, Node *&tail, int val) // O(1)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtPos(Node *&head, Node *&tail, int pos, int val) // O(N)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
int main()
{
    /* Node *head = NULL;
    Node *tail = NULL; */
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;
    head->prev = NULL;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = NULL;
    printList(head);
    printReverse(tail);
    int pos, val;
    cin >> pos >> val;
    if (pos > size(head))
    {
        cout << "Invalid Position" << endl;
        return 0;
    }
    else if (pos == size(head))
    {
        insertTail(head, tail, val);
    }

    else if (pos == 0)
    {
        insertHead(head, tail, val);
    }
    else
    {
        insertAtPos(head, tail, pos, val);
    }
    printList(head);
    printReverse(tail);
    return 0;
}