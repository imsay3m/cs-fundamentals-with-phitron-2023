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
class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        if (sz == 0)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        delete deleteNode;
    }
    int top()
    {
        if (sz == 0)
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        return tail->val;
    }
};
int main()
{
    myStack st1;
    myStack st2;
    int n1, n2;
    cin >> n1;
    for (size_t i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> n2;
    for (size_t i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    bool flag = true;
    if (st1.sz != st2.sz)
    {
        flag = false;
        cout << "NO" << endl;
    }
    else
    {
        for (size_t i = 0; i < n1; i++)
        {
            if (st1.top() != st2.top())
            {
                flag = false;
                cout << "NO" << endl;
                break;
            }
            else
            {
                st1.pop();
                st2.pop();
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }

    return 0;
}