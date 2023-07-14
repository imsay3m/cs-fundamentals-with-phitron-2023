#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;

    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, string val)
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

void traverseToV(Node *head, Node *&cur, string val)
{
    Node *tmp = cur;
    cur = head;
    bool flag = true;
    while (cur != NULL && cur->val != val)
    {
        cur = cur->next;
    }
    if (cur == NULL)
    {
        flag = true;
    }
    else
    {
        flag = false;
    }
    if (flag)
    {
        cout << "Not Available" << endl;
        cur = tmp;
        return;
    }
    cout << cur->val << endl;
}

void traverseNext(Node *head, Node *&cur)
{
    if (cur->next == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    cur = cur->next;
    cout << cur->val << endl;
}

void traversePrev(Node *head, Node *&cur)
{
    if (cur->prev == NULL)
    {
        cout << "Not Available" << endl;
        return;
    }
    cur = cur->prev;
    cout << cur->val << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string val;

    while (1)
    {
        cin >> val;
        if (val == "end")
            break;
        insertTail(head, tail, val);
    }

    Node *cur = head;

    int q;
    cin >> q;

    while (q--)
    {
        string op, address;
        cin >> op;

        if (op == "visit")
        {
            cin >> address;
            traverseToV(head, cur, address);
        }
        else if (op == "next")
        {
            traverseNext(head, cur);
        }
        else if (op == "prev")
        {
            traversePrev(head, cur);
        }
    }

    return 0;
}
