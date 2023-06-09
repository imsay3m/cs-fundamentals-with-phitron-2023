#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (size_t i = 1; i <= n; i++)
    {

        for (size_t j = 1; j <= k; j++)
        {

            printf("%d ", j);
        }
        // line shesh
        k++;
        printf("\n");
        }

    return 0;
}