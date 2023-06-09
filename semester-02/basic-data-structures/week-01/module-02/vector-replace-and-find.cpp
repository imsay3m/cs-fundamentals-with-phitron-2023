#include <bits/stdc++.h>
using namespace std;
int main()
{
    // replace
    /* vector<int> v = {1, 2, 3, 2, 3, 2, 4, 2, 3, 2, 1, 2, 3, 2, 2};
    replace(v.begin(), v.end() - 1, 2, 100);
    for (int x : v)
    {
        cout << x << " ";
    } */
    // find
    vector<int> v = {1, 2, 3, 2, 3, 2, 4, 2, 3, 2, 1, 2, 3, 2, 3, 100, 1};
    // find() returns a iterator or pointer of vector
    // vector<int>::iterator it;
    //'auto' automatically detect 'it' is vector iterator or pointer
    auto it = find(v.begin(), v.end(), 100);
    // auto it = find(v.begin(), v.end(), 3);
    cout << *it << endl;
    it == v.end() ? cout << "Not found" << endl : cout << "found" << endl;
    return 0;
}