#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* Assign another vector of same size
    vector<int> x = {10, 20, 30};
    vector<int> v = {4, 5, 6};
    v = x; // O(1)
    Assign another vector of different size
    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {4, 5, 6};
    v = x; // O(N) */
    // alt + shift + a
    vector<int> v = {40, 50, 60};
    v.pop_back();
    v.pop_back();
    v.push_back(10);
    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}