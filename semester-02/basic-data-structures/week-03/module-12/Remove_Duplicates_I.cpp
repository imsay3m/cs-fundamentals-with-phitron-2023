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
void sortList(Node *head) // O(N*N)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val >= j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}
void removeDuplicate(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL && tmp->next != NULL)
    {
        if (tmp->val == tmp->next->val)
        {
            tmp->next = tmp->next->next;
        }
        if (tmp->next == NULL)
            break;
        else if (tmp->val != tmp->next->val)
        {
            tmp = tmp->next;
        }
    }
}
void insertTail(Node *&head, Node *&tail, int val)
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
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insertTail(head, tail, val);
    }
    sortList(head);
    removeDuplicate(head);
    printList(head);
}