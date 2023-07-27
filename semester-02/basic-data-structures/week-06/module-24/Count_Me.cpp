#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int maxCnt = INT_MIN;
        string maxWord;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > maxCnt)
            {
                maxCnt = mp[word];
                maxWord = word;
            }
        }
        cout << maxWord << " " << maxCnt << endl;
    }

    return 0;
}