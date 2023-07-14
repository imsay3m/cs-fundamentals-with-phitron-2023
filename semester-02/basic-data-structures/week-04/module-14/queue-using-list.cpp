#include <bits/stdc++.h>
using namespace std;
class myQueue
{
public:
    list<int> l;
    void push(int val) // insert tail
    {
        l.push_back(val);
    }
    void pop() // delete head
    {
        if (size() == 0)
        {
            cout << "Queue Underflow" << endl;
            return;
        }
        l.pop_front();
    }
    int front()
    {
        if (size() == 0)
        {
            cout << "Queue is Empty";
            return 0;
        }
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        if (size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    q.pop();
    return 0;
}