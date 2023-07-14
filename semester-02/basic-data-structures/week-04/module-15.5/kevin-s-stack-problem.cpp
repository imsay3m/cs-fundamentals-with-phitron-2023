#include <bits/stdc++.h>
string kevinStackProblem(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.push(s[i]);
    }
    string newS;
    while (!st.empty())
    {
        newS += st.top();
        st.pop();
    }
    return newS;
}
