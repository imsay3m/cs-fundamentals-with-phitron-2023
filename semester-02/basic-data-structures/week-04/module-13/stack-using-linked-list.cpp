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
    void push(int val) // insert at tail
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
    void pop() // delete tail
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
            cout << "Stack is Empty ";
            return 0;
        }
        return tail->val;
    }
    int size()
    {
        return sz; // O(1)
    }
    bool empty() // O(1)
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    /* st.push(10);
    st.push(20);
    st.pop();
    cout << st.top() << endl; */
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}