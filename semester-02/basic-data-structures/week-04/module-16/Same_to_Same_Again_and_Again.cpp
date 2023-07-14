#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
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
        while (!q.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            q.pop();
            st.pop();
        }
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}