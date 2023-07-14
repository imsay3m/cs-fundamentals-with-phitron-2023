#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int t;
    cin >> t;
    while (t--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (op == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
    }

    return 0;
}