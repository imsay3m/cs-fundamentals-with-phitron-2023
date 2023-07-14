#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // 1. Returns the size of the list.
    cout << myList.size() << endl;
    // 2. Returns the maximum size that the vector can hold.
    cout << myList.max_size() << endl;
    // 3. Return true/false if the list is empty or not.
    myList.empty() ? cout << "Empty" << endl : cout << "Not empty" << endl;
    // 4. Clears the list elements. Do not delete the memory, only clear the list.
    //  myList.clear();
    // 5. Change the size of the list
    myList.resize(3);
    myList.resize(5, 100);
    for (auto val : myList)
    {
        cout << val << endl;
    }
    cout << myList.size() << endl;
    myList.empty() ? cout << "Empty" << endl : cout << "Not empty" << endl;

    return 0;
}