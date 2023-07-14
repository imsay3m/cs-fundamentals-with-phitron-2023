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
void printLtoR(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printRtoL(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
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
void insertHead(Node *&head, Node *&tail, int val)
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
void insertTail(Node *&head, Node *&tail, int val)
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
    Node *head = NULL;
    Node *tail = NULL;
    int pos, val, q;
    cin >> q;
    while (q--)
    {
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
            continue;
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
        printLtoR(head);
        printRtoL(tail);
    }
    return 0;
}