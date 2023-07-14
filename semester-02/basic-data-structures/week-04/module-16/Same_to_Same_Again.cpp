#include <bits/stdc++.h>
using namespace std;
class sNode
{
public:
    int val;
    sNode *next;
    sNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class myQueue
{
public:
    sNode *head = NULL;
    sNode *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        sNode *newNode = new sNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        sNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    bool empty()
    {
        if (sz == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
class dNode
{
public:
    int val;
    dNode *next;
    dNode *prev;
    dNode(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack
{
public:
    dNode *head = NULL;
    dNode *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        dNode *newNode = new dNode(val);
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
        sz--;
        dNode *deleteNode = tail;
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
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
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
    int n;
    cin >> n;
    int m;
    cin >> m;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    myQueue q;

    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;

    if (n != m)
    {
        flag = false;
    }
    else
    {
        while (!st.empty() && !q.empty())
        {
            int x = st.top();
            int y = q.front();
            if (x != y)
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }
    flag ? cout << "YES" : cout << "NO";
    return 0;
}