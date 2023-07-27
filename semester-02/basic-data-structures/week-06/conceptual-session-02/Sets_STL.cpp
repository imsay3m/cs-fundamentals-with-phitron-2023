#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    set<int> s;
    int op;
    while (q--)
    {
        cin >> op;
        int x;
        cin >> x;
        if (op == 1)
        {
            s.insert(x);
        }
        else if (op == 2)
        {
            s.erase(x);
        }
        else if (op == 3)
        {
            if (s.find(x) != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}