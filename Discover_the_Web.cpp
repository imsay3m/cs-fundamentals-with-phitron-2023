#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t)
    {
        cout << "Case " << t << ":" << endl;
        t--;
        bool flag = true;
        stack<string> forwardSt;
        stack<string> backwardSt;
        string homePage = "http://www.lightoj.com/";
        forwardSt.push(homePage);
        while (flag)
        {

            string s, url;
            cin >> s;

            if (s == "VISIT")
            {
                cin >> url;
                forwardSt.push(url);
                cout << forwardSt.top() << endl;
            }
            else if (s == "BACK")
            {
                if (forwardSt.size() <= 1)
                {
                    cout << "Ignored" << endl;
                    continue;
                }
                backwardSt.push(forwardSt.top());
                forwardSt.pop();
                if (forwardSt.empty())
                {
                    cout << "Ignored" << endl;
                    continue;
                }
                cout << forwardSt.top() << endl;
            }
            else if (s == "FORWARD")
            {
                if (backwardSt.empty())
                {
                    cout << "Ignored" << endl;
                    continue;
                }
                forwardSt.push(backwardSt.top());
                backwardSt.pop();
                if (backwardSt.empty())
                {
                    cout << "Ignored" << endl;
                    continue;
                }
                cout << forwardSt.top() << endl;
            }
            else if (s == "QUIT")
            {
                flag = false;
            }
        }
    }

    return 0;
}