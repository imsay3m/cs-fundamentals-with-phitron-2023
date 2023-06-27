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
void insertAtTail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted At Head" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp akhon last node a
    tmp->next = newNode;
    cout << endl
         << "Inserted At Tail" << endl
         << endl;
}
void insertAtPosition(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Inserted At Position: " << pos << endl
         << endl;
}
void printLinkedList(Node *head)
{
    cout << endl;
    Node *tmp = head;
    cout << "Your Linked List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert At Tail" << endl;
        cout << "Option 2: Insert At Any Position" << endl;
        cout << "Option 3: Print Linked List" << endl;
        cout << "Option 4: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter A value: ";
            int v;
            cin >> v;
            insertAtTail(head, v);
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "Enter the position: ";
            cin >> pos;
            cout << "Enter The Value: ";
            cin >> v;
            insertAtPosition(head, pos, v);
        }
        else if (op == 3)
        {
            printLinkedList(head);
        }
        else if (op == 4)
        {
            cout << "--------Exited-------";
            return 0;
        }
    }
}