#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edgeList;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        edgeList.push_back({a, b});
    }
    for (int i = 0; i < edgeList.size(); i++)
    {
        cout << edgeList[i].first << " " << edgeList[i].second << endl;
    }

    return 0;
}

/*
input
4 4
1 2
4 1
1 3
3 4

*/