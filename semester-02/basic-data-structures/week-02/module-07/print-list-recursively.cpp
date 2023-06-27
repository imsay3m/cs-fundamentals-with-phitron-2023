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
void insert(Node *&head, Node *&tail, int val)
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
void printReverse(Node *head)
{
    Node *tmp = head;
    if (head == NULL)
        return;
    printReverse(tmp->next);
    cout << tmp->val << " ";
}
void printRecursive(Node *head)
{
    Node *tmp = head;
    if (head == NULL)
        return;
    cout << tmp->val << " ";
    printRecursive(tmp->next);
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

        insert(head, tail, val);
    }
    printRecursive(head);
    cout << endl;
    printReverse(head);

    return 0;
}