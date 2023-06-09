#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    /**cout << v.capacity() << endl;
    * when the capacity is over it double the capacity
    v.push_back(1);
    cout << v.capacity() << endl;
    v.push_back(2);
    cout << v.capacity() << endl;
    v.push_back(4);
    cout << v.capacity() << endl;
    v.push_back(8);
    cout << v.capacity() << endl;
    v.push_back(16);
    cout << v.capacity() << endl;
    v.push_back(32);
    cout << v.capacity() << endl;**/

    /**v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    v.push_back(52);
    v.push_back(62);
    // Do not delete the memory, only clear the size.
    v.clear();
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    //you can access the value by index
    cout << endl<< v[2];**/
    // empty function return boolean 1 or 0
    cout << v.empty();
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    v.push_back(52);
    v.push_back(62);
    // resize it empty the rest of the element
    v.resize(2);
    v.resize(6, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}