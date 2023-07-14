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
void reverse(Node *&head, Node *cur)
{
    if (cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insertTail(head1, tail1, val);
    }
    Node *tmp = head1;
    while (tmp != NULL)
    {
        insertTail(head2, tail2, tmp->val);
        tmp = tmp->next;
    }
    reverse(head2, head2);
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
        {
            cout << "NO" << endl;
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    cout << "YES" << endl;

    return 0;
}