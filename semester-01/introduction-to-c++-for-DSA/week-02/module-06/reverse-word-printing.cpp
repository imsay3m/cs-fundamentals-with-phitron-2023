#include <bits/stdc++.h>
using namespace std;
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        cout << word << endl;
        print(ss);
    }
}
void printReverse(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        printReverse(ss);
        cout << word << endl;
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    // print(ss);
    cout << "----Printing Reverse----" << endl;
    printReverse(ss);
    return 0;
}