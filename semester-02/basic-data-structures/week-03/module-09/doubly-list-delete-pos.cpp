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
void deleteTail(Node *&tail) // O(1)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}
void deleteHead(Node *&head) // O(1)
{
    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}
void deletePos(Node *&head, int pos) // O(N)
{

    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;
    // head->prev = NULL;
    // head->next = a;
    // a->prev = head;
    // a->next = b;
    // b->prev = a;
    // b->next = c;
    // c->prev = b;
    // c->next = NULL;
    printList(head);
    printReverse(tail);
    int pos;
    // deleteTail(tail);
    // deleteHead(head);
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "Invalid Position" << endl;
    }

    else if (pos == 0)
    {
        deleteHead(head);
    }
    else if (pos == size(head) - 1)
    {
        deleteTail(tail);
    }
    else
    {
        deletePos(head, pos);
    }
    printList(head);
    printReverse(tail);
    return 0;
}