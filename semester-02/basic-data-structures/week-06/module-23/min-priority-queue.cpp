#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    while (1)
    {
        cout << "Operation 0: Insert Heap\nOperation 1: Delete Heap\nOperation 2: Min value\n";
        int op;
        cin >> op;
        if (op == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (op == 1)
        {
            pq.pop(); // O(logN)
        }
        else if (op == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }

    return 0;
}