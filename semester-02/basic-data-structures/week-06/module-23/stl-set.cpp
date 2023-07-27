#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int sz;
    cin >> sz;
    while (sz--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    // searching //O(logN)
    cout << s.count(10) << endl;
    // does not count duplicate
    if (s.count(1000))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; // O(logN)
        // remove duplicate
        // use vector to reverse
    }

    return 0;
}