#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    // 1. Access the tail element.
    cout << myList.front() << endl;
    // 2. Access the head element.
    cout << myList.back() << endl;
    // 3. Access the ith element
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}