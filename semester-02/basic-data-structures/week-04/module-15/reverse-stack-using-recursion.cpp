void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    stack<int> rSt;
    while (!st.empty())
    {
        rSt.push(st.top());
        st.pop();
    }
    rSt.push(x);
    while (!rSt.empty())
    {
        st.push(rSt.top());
        rSt.pop();
    }
}