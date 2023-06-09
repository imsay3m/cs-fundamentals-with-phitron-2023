#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    char str[101];
    // without space-printf,scanf
    // cin >> str;
    // cout << str;
    // with space-fgets(variable,size,stdin)[count enter]
    // cin.getline(variable,size)[doesn't count enter]
    cin.getline(str, 101);
    cout << strlen(str) << endl;
    cout << str;
    return 0;
}