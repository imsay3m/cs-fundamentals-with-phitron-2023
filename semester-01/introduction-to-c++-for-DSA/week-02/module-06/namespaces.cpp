#include <bits/stdc++.h>
using namespace std;
// namspace contain class,varible,function so on
namespace Sayem
{
    int age1 = 21;
    void hello()
    {
        cout << "Sayem Namespace" << endl;
    }

}
namespace Tufayel
{
    int age2 = 23;
    void hello()
    {
        cout << "Tufayel Namespace" << endl;
    }
}
using namespace Sayem;
using namespace Tufayel;
int main()
{
    // cout << Sayem::age1 << endl;
    // cout << Tufayel::age2 << endl;
    cout << age1 << endl;
    cout << age2 << endl;
    // hello();
    Sayem::hello();
    Tufayel::hello();

    return 0;
}