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
void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
}
void insertHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    newNode->next = tmp;
    head = newNode;
}
void insertPosition(Node *&head, Node *&tail, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    if (pos == 0)
    {
        insertHead(head, val);
        return;
    }
    else if (pos > size(head))
    {
        cout << "Invalid" << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insertTail(head, tail, val);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        insertPosition(head, tail, pos, val);
        printList(head);
    }

    return 0;
}