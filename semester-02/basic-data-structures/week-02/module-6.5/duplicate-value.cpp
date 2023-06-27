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
void insertAtTail(Node *&head, Node *&tail, int val)
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
/* int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        cnt++;
    }
    return cnt;
} */
void duplicate(Node *head)
{
    int flag = 1;
    Node *tmp1 = head;
    while (tmp1 != NULL)
    {
        Node *tmp2 = tmp1;
        while (tmp2->next != NULL)
        {
            if (tmp1->val == tmp2->next->val)
            {
                cout << "YES";
                flag = 0;
                return;
            }
            tmp2 = tmp2->next;
        }
        tmp1 = tmp1->next;
    }
    if (flag && head != NULL)
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = head;
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        else
        {
            insertAtTail(head, tail, val);
        }
    }
    duplicate(head);

    return 0;
}