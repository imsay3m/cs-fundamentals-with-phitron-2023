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
void printList(Node *head) // O(N)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printReverse(Node *tail) // O(N)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head) // O(N)
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
void insertHead(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    Node *tmp = head;
    newNode->next = tmp;
    tmp->prev = newNode;
    head = newNode;
}
void insertTail(Node *&head, Node *&tail, int val) // O(1)
{

    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtPos(Node *&head, Node *&tail, int pos, int val) // O(N)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->prev = tmp;
    newNode->next->prev = newNode;
}
void deleteTail(Node *&head, Node *&tail) // O(1)
{
    if (tail == NULL)
    {
        cout << "tail is null" << endl;
        return;
    }
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}
void deleteHead(Node *&head, Node *&tail) // O(1)
{
    if (head == NULL)
    {
        tail = NULL;
        cout << "head is null" << endl;
        return;
    }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void deletePos(Node *&head, Node *&tail, int pos) // O(N)
{
    if (pos == 0)
    {
        deleteHead(head, tail);
        return;
    }
    else if (pos == size(head) - 1)
    {
        deleteTail(head, tail);
        return;
    }
    else if (pos >= size(head))
    {
        cout << "Invalid Position" << endl;
    }
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        cout << "\n\nOprations\n1. Insert at head\n2. Insert at any position\n3. Insert at tail\n4. Delete Head\n5. Delete at position\n6. Delete Tail\n7. Print Linked List\n8. Print Reverse Linked List\n9. Terminate Programme\n"
             << endl;
        cout << "Enter Operation Number: ";
        int op, val, pos;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Enter Value: ";
            cin >> val;
            insertHead(head, tail, val);
            break;
        case 2:
            cout << "Enter Position: ";
            cout << "Enter Value: ";
            cin >> pos >> val;
            insertAtPos(head, tail, pos, val);
            break;
        case 3:
            cout << "Enter Value: ";
            cin >> val;
            insertTail(head, tail, val);
            break;
        case 4:
            deleteHead(head, tail);
            break;
        case 5:
            cout << "Enter Position: ";
            cin >> pos;
            deletePos(head, tail, pos);
            break;
        case 6:
            deleteTail(head, tail);
            break;
        case 7:
            cout << "List: ";
            printList(head);
            break;
        case 8:
            cout << "Reverse List: ";
            printList(head);
            break;
        case 9:
            cout << "----exited----" << endl;
            return 0;
            break;
        default:
            cout << "Invalid Operation" << endl;
            break;
        }
    }

    return 0;
}