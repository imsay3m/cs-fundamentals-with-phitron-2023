// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int t;
//     scanf("%d", &t);
//     while (t--)
//     {
//         char s[1001], x[1001];
//         scanf("%s %s", s, x);
//         int len_s = strlen(s);
//         int len_x = strlen(x);
//         for (int i = 0; i <= len_s - len_x; i++)
//         {
//             if (strncmp(s + i, x, len_x) == 0)
//             {
//                 printf("$");
//                 i += len_x - 1;
//             }
//             else
//             {
//                 printf("%c", s[i]);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         char s[1001], x[1001];
//         cin >> s >> x;
//         for (int i = 0; i <= strlen(s) - 1; i++)
//         {
//             if (strncmp(s + i, x, strlen(x)) == 0)
//             {
//                 cout << "$";
//                 i = i + strlen(x) - 1;
//             }
//             else
//             {
//                 cout << s[i];
//             }
//         }
//         cout << "\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s[1001], x[1001];
        cin >> s >> x;
        for (size_t i = 0; i <= strlen(s) - 1; i++)
        {
            if (strncmp(s + i, x, strlen(x)) == 0)
            {
                cout << "$";
                i = i + strlen(x) - 1;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
