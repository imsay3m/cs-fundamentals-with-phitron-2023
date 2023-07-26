#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int sz;
    cin >> sz;
    for (int i = 0; i < sz; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int curIdx = v.size() - 1;
        while (curIdx != 0)
        {
            int prntIdx = (curIdx - 1) / 2;
            // cout << prntIdx << " " << curIdx << endl;
            if (v[curIdx] < v[prntIdx])
            {
                swap(v[curIdx], v[prntIdx]);
            }
            else
            {
                break;
            }
            curIdx = prntIdx;
        }
    }
    for (int val : v)
    {
        cout << val << " ";
    }
    return 0;
}