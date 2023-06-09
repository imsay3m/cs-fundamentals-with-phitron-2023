#include <stdio.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    for (int i = 0;; i++)
    {
        if (a[i] == '\0' || a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
        if (b[i] == '\0' || b[i] < a[i])
        {
            printf("%s", b);
            break;
        }

        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
    }

    return 0;
}