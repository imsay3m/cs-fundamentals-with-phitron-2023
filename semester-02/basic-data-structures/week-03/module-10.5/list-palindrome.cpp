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
    newNode->prev = tail;
    tail = newNode;
}
void palindromeList(Node *head, Node *tail)
{
    bool flag = 1;
    Node *i = head, *j = tail;
    for (i, j; i != j; i = i->next, j = j->prev)
    {
        if (i->val != j->val)
        {
            flag = 0;
            cout << "NO" << endl;
            return;
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
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
    palindromeList(head, tail);

    return 0;
}