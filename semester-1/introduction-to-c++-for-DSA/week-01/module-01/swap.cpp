#include <iostream>
#include <utility>

using namespace std;
// int mySwap(int *a, int *b)
// {
//     // de refference
//     int tmp = *a;
//     *a = *b;
//     *b = tmp;
// }
int main()
{
    int x, y;
    cin >> x >> y;
    // int swp = mySwap(&x, &y);
    swap(x, y);
    cout << x << " " << y;
}