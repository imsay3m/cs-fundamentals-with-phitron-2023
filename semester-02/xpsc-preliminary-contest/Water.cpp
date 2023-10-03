#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
bool cmp(pi &a, pi &b)
{
    return a.second < b.second;
}
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {

    // }
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp.insert({i, x});
    }
    sort(mp.begin(), mp.end(), cmp);
    for (auto i : mp)
    {
        cout << i.first << endl;
    }
    return 0;
}