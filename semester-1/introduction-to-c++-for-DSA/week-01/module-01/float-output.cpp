#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a;
    cin >> a;
    cout << a << endl;
    float b = 200.90707;
    cout << fixed << setprecision(3) << b << endl
         << a << endl;
    return 0;
}