#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;
    for (size_t i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= n; j++)
        {
            if (i == mid)
            {
                printf("#");
                continue;
            }
            if (j == mid)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
    }

    return 0;
}