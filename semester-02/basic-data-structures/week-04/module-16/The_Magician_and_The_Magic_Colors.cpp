#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> st;
        int sz;
        cin >> sz;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (!st.empty() && c == st.top())
            {
                st.pop();
            }
            else if (!st.empty() && (st.top() == 'R' || st.top() == 'B' || st.top() == 'G'))
            {
                if ((c == 'R' && st.top() == 'B') || (c == 'B' && st.top() == 'R'))
                {
                    char rb = 'P';
                    st.pop();
                    if (!st.empty() && st.top() == rb)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(rb);
                    }
                }
                else if ((c == 'R' && st.top() == 'G') || (c == 'G' && st.top() == 'R'))
                {
                    char rg = 'Y';
                    st.pop();
                    if (!st.empty() && st.top() == rg)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(rg);
                    }
                }
                else if ((c == 'B' && st.top() == 'G') || (c == 'G' && st.top() == 'B'))
                {
                    char bg = 'C';
                    st.pop();
                    if (!st.empty() && st.top() == bg)
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(bg);
                    }
                }
            }
            else
            {
                st.push(c);
            }
        }
        stack<char> newSt;
        while (!st.empty())
        {
            newSt.push(st.top());
            st.pop();
        }
        while (!newSt.empty())
        {
            cout << newSt.top();
            newSt.pop();
        }
        cout << endl;
    }
    return 0;
}