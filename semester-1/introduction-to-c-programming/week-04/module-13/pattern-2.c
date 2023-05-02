#include <stdio.h>

int main()
{
    int n, k, s;
    scanf("%d", &n);
    k = 1;
    s = n - 1;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (size_t j = 1; j <= k; j++)
        {
            printf("*");
        }
        // line sesh
        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}