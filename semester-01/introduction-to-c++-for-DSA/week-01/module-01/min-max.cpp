#include <iostream>
#include <algorithm>
using namespace std;
// int myMax(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }
// int myMin(int a, int b)
// {
//     if (a < b)
//         return a;
//     else
//         return b;
// }
int main()
{
    int x, y;
    cin >> x >> y;
    // int mn = myMin(x, y);
    // int mx = myMax(x, y);
    int mn = min(x, y);
    int mx = max(x, y);
    cout << "Minimum Value: " << mn << endl;
    cout << "Maximum Value: " << mx << endl;
    return 0;
}