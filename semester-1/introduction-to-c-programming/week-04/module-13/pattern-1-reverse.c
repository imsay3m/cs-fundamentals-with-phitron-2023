#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);
    k = n;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = k; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
        k--;
    }

    return 0;
}