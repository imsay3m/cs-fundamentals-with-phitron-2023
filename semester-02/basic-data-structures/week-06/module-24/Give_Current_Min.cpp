#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz;
    cin >> sz;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }
    int q;
    cin >> q;
    int op;
    while (q--)
    {
        cin >> op;
        if (op == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            if (pq.size() == 0)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (op == 1)
        {
            if (pq.size() == 0)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (op == 2)
        {
            if (pq.size() == 0)
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.size() == 0)
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}