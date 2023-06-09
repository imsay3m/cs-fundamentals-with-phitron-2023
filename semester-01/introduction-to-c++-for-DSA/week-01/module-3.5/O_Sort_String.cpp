#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // using  counting sort
    int freq[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        freq[a - 'a']++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (freq[i - 'a'] > 0)
        {
            for (int j = 0; j < freq[i - 'a']; j++)
            {
                cout << i;
            }
        }
    }

    return 0;
}