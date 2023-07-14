#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> newSt;
    while (!myStack.empty())
    {
        newSt.push(myStack.top());
        myStack.pop();
    }
    newSt.push(x);
    while (!newSt.empty())
    {
        myStack.push(newSt.top());
        newSt.pop();
    }
    return myStack;
}
