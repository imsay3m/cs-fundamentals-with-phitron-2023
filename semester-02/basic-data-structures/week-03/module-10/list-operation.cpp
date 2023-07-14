#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};
    list<int> newList = {20, 40, 30, 60, 10, 60, 50, 10, 10};
    // 1. Remove the value V from the list.
    newList.remove(60);
    // 2. Sort the list in ascending order.
    newList.sort();
    // 3. Sort the list in descending order
    newList.sort(greater<int>());
    // 4. Deletes the duplicate values from the list.You must sort the list first.
    newList.unique();
    // 5. Reverse the list.
    newList.reverse();
    for (int val : newList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}