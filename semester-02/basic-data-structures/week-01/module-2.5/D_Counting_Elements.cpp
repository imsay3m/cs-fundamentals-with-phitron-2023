#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {

            if (v[i] + 1 == v[j] && flag)
            {
                cnt++;
                flag = 0;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}