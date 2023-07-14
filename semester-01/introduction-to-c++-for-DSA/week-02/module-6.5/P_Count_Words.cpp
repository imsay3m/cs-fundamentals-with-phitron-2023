/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss;
    ss << s;
    string word;
    int count = 0;
    while (ss >> word)
    {
        char c = word.front();
        if (c == '!' || c == '.' || c == '?' || c == ',')
            continue;
        count++;
    }
    cout << count << endl;
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool insideWord = false;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (!insideWord)
            {
                cnt++;
            }
            insideWord = true;
        }
        else
        {
            insideWord = false;
        }
    }
    cout << cnt << endl;
    return 0;
}