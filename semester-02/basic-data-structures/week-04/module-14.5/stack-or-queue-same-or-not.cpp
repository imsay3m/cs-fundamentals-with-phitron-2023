#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cin >> m;
    for (size_t i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (st.size() != q.size())
    {
        flag = false;
        cout << "NO" << endl;
    }
    else
    {
        for (size_t i = 0; i < n; i++)
        {
            if (st.top() != q.front())
            {
                flag = false;
                cout << "NO" << endl;
                break;
            }
            else
            {
                st.pop();
                q.pop();
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }

    return 0;
}