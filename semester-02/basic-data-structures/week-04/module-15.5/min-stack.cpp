#include <bits/stdc++.h>
// Implement class for minStack.
class minStack
{
    // Write your code here.

public:
    stack<int> st;
    stack<int> mn;
    minStack()
    {
        // Write your code here.
    }

    // Function to add another element equal to num at the top of stack.
    void push(int val)
    {
        if (st.empty())
        {
            st.push(val);
            mn.push(val);
        }
        else
        {
            st.push(val);
            mn.push(min(mn.top(), val));
        }
    }

    // Function to remove the top element of the stack.
    int pop()
    {
        if (st.empty())
            return -1;
        mn.pop();
        int x = st.top();
        st.pop();
        return x;
    }

    // Function to return the top element of stack if it is present. Otherwise return -1.
    int top()
    {
        if (st.empty())
            return -1;
        return st.top();
    }

    // Function to return minimum element of stack if it is present. Otherwise return -1.
    int getMin()
    {
        if (mn.empty())
            return -1;
        return mn.top();
    }
};