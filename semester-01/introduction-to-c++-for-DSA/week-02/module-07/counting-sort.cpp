#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz;
    cin >> sz;
    char arr[sz];
    char freq[26] = {0};
    for (int i = 0; i < sz; i++)
    {
        char a;
        cin >> a;
        freq[a - 'a']++;
    }
    int cnt = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (freq[i - 'a'] > 0)
        {
            for (int j = 0; j < freq[i - 'a']; i++)
            {
                cout << i;
            }
        }
    }

    return 0;
}