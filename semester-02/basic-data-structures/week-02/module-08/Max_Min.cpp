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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void minMax(Node *head, Node *tail)
{
    int min = head->val;
    int max = head->val;
    if (head == tail)
    {
        min = max = head->val;
        cout << max << " " << min;
        return;
    }

    for (Node *i = head; i != NULL; i = i->next)
    {
        if (max <= i->val)
        {
            max = i->val;
        }
        else if (min >= i->val)
        {
            min = i->val;
        }
    }
    cout << max << " " << min;
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
    minMax(head, tail);
    return 0;
}