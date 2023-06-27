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
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *tail1 = NULL;
    Node *tail2 = NULL;
    int val1, val2;
    while (1)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insertTail(head1, tail1, val1);
    }
    int size1 = size(head1);
    while (1)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insertTail(head2, tail2, val2);
    }
    int size2 = size(head2);
    size1 == size2 ? cout << "YES" : cout << "NO";
    cout << endl;

    return 0;
}