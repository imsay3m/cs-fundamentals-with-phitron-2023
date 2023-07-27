#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int q;
    cin >> q;
    int op;
    while (q--)
    {
        cin >> op;
        string x;
        cin >> x;
        if (op == 1)
        {
            int y;
            cin >> y;
            if (m.count(x) == 1)
            {
                m[x] += y;
            }
            else
            {
                m.insert({x, y});
            }
        }
        else if (op == 2)
        {
            m.erase(x);
            // m[x]=0;
        }
        else if (op == 3)
        {
            if (m.count(x) != 1)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << m[x] << endl;
            }
        }
    }

    return 0;
}