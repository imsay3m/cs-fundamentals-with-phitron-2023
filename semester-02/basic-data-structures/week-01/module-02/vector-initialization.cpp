#include <bits/stdc++.h>
using namespace std;
int main()
{
    // type-1:Construct a vector with 0 elements
    // vector<int> v;

    // type-2:Construct a vector with N elements and the value will be garbage.
    // vector<int> v(5);

    // type-3:Construct a vector with N elements and the value will be V
    // vector<int> v(5, 1);

    // type-4:Construct a vector by copying another vector v2.
    // vector<int> v2(5, 101);
    // vector<int> v(v2);

    // type-5:Construct a vector by copying all elements from an array A of size N.
    // int a[6] = {10, 20, 30, 40, 50, 60};
    // vector<int> v(a, a + 6);
    vector<int> v = {2, 10, 3, 72};
    v[2] = 102;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl
         << v.size() << endl;

    return 0;
}