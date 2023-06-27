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
int getSize(Node *head);
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    newNode->next = tmp;
    head = newNode;
}
void insertAtAnyPosition(Node *&head, int pos, int val)
{
    Node *newNode = new Node(val);
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    if (pos == getSize(head))
    {
        insertAtTail(head, val);
        return;
    }
    else
    {
        Node *tmp = head;
        for (int i = 0; i <= pos - 1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
int getSize(Node *head)
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
    insertAtTail(head, 5);
    insertAtTail(head, 10);
    insertAtHead(head, 500);
    insertAtTail(head, 15);
    insertAtHead(head, 100);
    printList(head);
    cout << endl
         << "Size Is: " << getSize(head) << endl;
    insertAtAnyPosition(head, 3, 100);
    printList(head);
    return 0;
}