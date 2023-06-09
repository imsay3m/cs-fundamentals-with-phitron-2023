#include <bits/stdc++.h>
using namespace std;
int main()
{
    // erase
    vector<int> v = {1, 2, 3, 4, 5};
    // deleting single value
    // v.erase(v.begin() + 2);
    // deleting multiple value
    // v.erase(v.begin() + 2, v.begin() + 5);
    v.erase(v.begin() + 2, v.end() - 1);
    for (int i : v)
    {
        cout << i << " ";
    }

    // access and iterators
    /* vector<int> v = {1, 2, 3, 4, 5};
    // cout << v[v.size()-1] << endl;
    // cout << v.back() << endl;
    // cout << v[0] << endl;
    cout << v.front() << endl;
    // vector<int>::iterator it;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << endl;
    } */

    return 0;
}