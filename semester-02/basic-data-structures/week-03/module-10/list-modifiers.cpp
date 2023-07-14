#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {1, 2, 3, 4, 5};
    // Assign another list
    list<int> myList2 = myList;
    list<int> newList;
    // Assign another list
    newList.assign(myList.begin(), myList.end());
    for (auto val : myList2)
    {
        cout << val << " ";
    }
    cout << endl;
    // newList.push_back(100);
    // newList.push_back(500);
    // newList.pop_front();
    // newList.push_front(100);
    // newList.pop_back();
    newList.insert(next(newList.begin(), 4), 111);
    // Delete elements from a specific position.
    newList.erase(next(newList.begin(), 2));
    // Insert elements at a specific position.
    newList.insert(next(newList.begin(), 4), {300, 400, 500});
    newList.insert(next(newList.begin(), 4), myList2.begin(), myList2.end());
    newList.erase(next(newList.begin(), 4), next(newList.begin(), 8));
    // Find the value V. Not under a list STL.
    auto it = find(myList.begin(), myList.end(), 4);
    if (it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }
    // Replace all the value with replace_value.Not under a list STL.
    replace(myList.begin(), myList.end(), 1, 222);

    cout << *it << endl;

    for (auto val : myList)
    {
        cout << val << " ";
    }
    cout << endl;
    for (auto val : newList)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}