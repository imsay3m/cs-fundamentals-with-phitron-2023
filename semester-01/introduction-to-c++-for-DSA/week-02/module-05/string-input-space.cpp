#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore(); // getchar();
    cout << x << endl;

    string s;
    // cin.getline(s,100);//char s[100]
    getline(cin, s); // when we want to take space as a charcter
    cout << s << endl;
    cout << s.size() << endl;
    return 0;
}