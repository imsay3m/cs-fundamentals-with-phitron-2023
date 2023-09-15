#include <bits/stdc++.h>
using namespace std;

int main()
{
    int e;
    cin >> e;
    vector<pair<int, int>> edgeList;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edgeList.push_back({a, b});
    }
    sort(edgeList.begin(), edgeList.end());
    for (int i = 0; i < edgeList.size(); i++)
    {
        cout << edgeList[i].first << " " << edgeList[i].second << endl;
    }

    return 0;
}