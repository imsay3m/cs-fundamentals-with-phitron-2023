#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<char, vector<char>, greater<char>> pq;
    string s;
    while (getline(cin, s))
    {
        for (size_t i = 0; i < s.size(); i++)
        {
            pq.push(s[i]);
        }
        while (!pq.empty())
        {
            if (pq.top() == ' ')
            {
                pq.pop();
            }
            else
            {
                cout << pq.top();
                pq.pop();
            }
        }
        cout << endl;
    }

    return 0;
}