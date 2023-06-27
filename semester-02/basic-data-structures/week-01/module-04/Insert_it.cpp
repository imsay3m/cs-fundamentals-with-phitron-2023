#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        v1.push_back(y);
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    int x;
    cin >> x;
    v1.insert(v1.begin() + x, v2.begin(), v2.end());
    for (int z : v1)
    {
        cout << z << " ";
    }

    return 0;
}