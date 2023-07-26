#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    while (1)
    {
        cout << "Operation 0: Insert Heap\nOperation 1: Delete Heap\nOperation 2: Max value\n";
        int op;
        cin >> op;
        if (op == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (op == 1)
        {
            pq.pop();
        }
        else if (op == 2)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}