/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        cnt++;
    }
    stringstream ssr;
    ssr << s;
    int count = 0;
    while (ssr >> word)
    {
        count++;
        reverse(word.begin(), word.end());
        cout << word;
        if (cnt == count)
            break;
        cout << " ";
    }
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    ss >> word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }
    return 0;
}