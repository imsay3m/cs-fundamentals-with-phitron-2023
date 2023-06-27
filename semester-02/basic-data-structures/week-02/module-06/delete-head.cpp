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
    cout << endl
         << "Inserted At Position: " << pos << endl
         << endl;
}
void insertAtHead(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted At Head" << endl
         << endl;
}
void deleteFromPosition(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Doesn't Exist" << endl
                 << endl;
            return;
        }
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl
         << "Deleted Position " << pos << endl
         << endl;
}

void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl
         << "Deleted Head" << endl
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
        cout << "Option 3: Insert At Head" << endl;
        cout << "Option 4: Delete from Any Position" << endl;
        cout << "Option 5: Delete from Head" << endl;
        cout << "Option 6: Print Linked List" << endl;
        cout << "Option 7: Terminate" << endl
             << endl;
        cout << "Enter The Option: ";
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
            if (pos == 0)
            {
                insertAtHead(head, v);
            }
            else
            {
                insertAtPosition(head, pos, v);
            }
        }
        else if (op == 3)
        {
            cout << "Please Enter A value: ";
            int v;
            cin >> v;
            insertAtHead(head, v);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter The Position you Want To Delete: ";
            cin >> pos;
            if (pos == 0)
            {
                deleteHead(head);
            }
            else
            {
                deleteFromPosition(head, pos);
            }
        }
        else if (op == 5)
        {
            deleteHead(head);
        }

        else if (op == 6)
        {
            printLinkedList(head);
        }
        else if (op == 7)
        {
            cout << "--------Exited-------";
            return 0;
        }
    }
}