#include <bits/stdc++.h>
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    queue<int> newQ;
    while (!st.empty())
    {
        newQ.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        newQ.push(q.front());
        q.pop();
    }
    return newQ;
}
