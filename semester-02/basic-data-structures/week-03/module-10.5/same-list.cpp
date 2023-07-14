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
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insertTail(head2, tail2, val);
    }
    bool flag = 1;
    if (size(head1) != size(head2))
    {
        flag = 0;
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}