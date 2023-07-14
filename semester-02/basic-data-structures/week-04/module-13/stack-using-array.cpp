#include <bits/stdc++.h>
using namespace std;
class myStack
{
private:
    vector<int> v;

public:
    void push(int val)
    {
        v.push_back(val); // O(1)
    }
    void pop()
    {
        v.pop_back(); // O(1)
    }
    int top()
    {
        return v.back(); // O(1)
    }
    int size()
    {
        return v.size(); // O(1)
    }
    bool empty()
    {
        return v.empty(); // O(1)
    }
};
int main()
{
    myStack st;
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

    return 0;
}