#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> v1(t);
    vector<int> v2(t);
    for (int i = 0; i < t; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin >> v2[i];
    }
    vector<int> v3(v2);
    for (int i = 0; i < t; i++)
    {
        v3.push_back(v1[i]);
    }

    // v3.insert(v3.end(), v1.begin(), v1.end());
    for (int x : v3)
    {
        cout << x << " ";
    }

    return 0;
}