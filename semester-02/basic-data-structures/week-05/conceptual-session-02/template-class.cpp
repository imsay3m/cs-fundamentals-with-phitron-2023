#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Adder
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
};
int main()
{
    Adder<double> doubleAdd;
    cout << doubleAdd.add(2.4, 3.3) << endl;
    Adder<string> str;
    cout << str.add("stl", "template") << endl;
    return 0;
}