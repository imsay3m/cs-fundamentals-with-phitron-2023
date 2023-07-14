#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1. Construct a list with 0 elements.
    //  list<int> myList;
    // 2. Construct a list with N elements and the value will be garbage.
    //  list<int> myList(10);
    // 3. Construct a list with N elements and the value will be V.
    //  list<int> myList(10, 5);
    list<int> myList = {1, 2, 3, 4, 5};
    // 4. Construct a list by copying another list list2.
    //  list<int> myList2(myList);
    int arr[5] = {10, 20, 30, 40, 50};
    // 5. Construct a list by copying all elements from an array A of size N.
    // list<int> myList2(arr, arr + 5);
    vector<int> v = {100, 200, 300, 400, 500};
    // 6. Construct a list by copying all elements from an vactor v.
    list<int> myList2(v.begin(), v.end());
    for (auto it = myList2.begin(); it != myList2.end(); it++)
    {
        cout << *it << endl;
    }
    cout << myList2.front() << endl;
    cout << myList.size() << endl;
    for (int it : myList)
    {
        cout << it << endl;
    }

    return 0;
}