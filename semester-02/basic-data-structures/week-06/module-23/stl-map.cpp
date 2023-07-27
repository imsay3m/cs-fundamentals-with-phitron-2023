#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp;
    /* mp.insert({"Sayem", 185});
    mp.insert({"Kawsar", 175});
    mp.insert({"Tufayel", 161});
    mp.insert({"Selim", 194}); */
    mp["Sayem"] = 185; // O(logN)
    mp["Kawsar"] = 175;
    mp["Tufayel"] = 160;
    mp["Tufayel"] = 161; // updating not creating
    mp["Selim"] = 194;
    /* for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    } */
    for (auto it : mp)
    {
        cout << it.first << endl;
    }

    if (mp.count("Tufayel"))
    {
        cout << "ase" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }
    /* cout << mp["Tufayel"] << endl;
    cout << mp["tufayel"] << endl; */
    return 0;
}