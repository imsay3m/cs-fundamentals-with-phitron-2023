#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        myList.push_back(val);
    }
    myList.sort();
    myList.unique();
    for (int it : myList)
    {
        cout << it << " ";
    }

    return 0;
}