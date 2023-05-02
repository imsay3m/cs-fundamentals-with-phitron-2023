#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    if (n < 0)
    {
        for (long int i = n; i <= 1; i++)
        {
            printf("%ld ", i);
        }
    }
    if (n > 0)
    {
        for (long int i = 1; i <= n; i++)
        {
            printf("%ld ", i);
        }
    }
    if (n == 0)
    {
        for (int i = 0; i <= 1; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}