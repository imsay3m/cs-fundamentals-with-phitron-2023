#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    cout << st.size() << endl;
    return 0;
}