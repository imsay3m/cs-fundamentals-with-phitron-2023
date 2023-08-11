#include <bits/stdc++.h>
using namespace std;
void mergeList(vector<int> v1, vector<int> v2, vector<int> vM)
{
    int i = 0, j = 0, k = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] >= v2[j])
        {
            vM[k] = v1[i];
            i++;
        }
        else if (v1[i] < v2[j])
        {
            vM[k] = v2[j];
            j++;
        }
        k++;
    }
    // remaining element
    // for array 1
    while (i < v1.size())
    {
        vM[k] = v1[i];
        i++;
        k++;
    }
    // for array 2
    while (j < v2.size())
    {
        vM[k] = v2[j];
        j++;
        k++;
    }
    for (int p = 0; p < (v1.size() + v2.size()); p++)
    {
        cout << vM[p] << " ";
    }
}

int main()
{
    int n, m;
    cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }
    vector<int> vM(n + m);
    mergeList(v1, v2, vM);

    return 0;
}