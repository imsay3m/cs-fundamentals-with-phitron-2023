#include <stdio.h>

int main()
{
    int a, q, r;
    scanf("%d", &a);
    q = a / 10;
    r = a % 10;
    if (r == 0)
    {
        printf("YES\n");
    }
    else
    {
        if (q % r == 0 || r % q == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}