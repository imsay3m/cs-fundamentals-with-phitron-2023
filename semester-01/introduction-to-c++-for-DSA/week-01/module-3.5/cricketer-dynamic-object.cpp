#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    int jerseyNo;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->country = "India";
    dhoni->jerseyNo = 7;
    Cricketer *kholi = new Cricketer;
    *kholi = *dhoni;
    delete dhoni;
    cout << kholi->country << endl
         << kholi->jerseyNo << endl;

    return 0;
}