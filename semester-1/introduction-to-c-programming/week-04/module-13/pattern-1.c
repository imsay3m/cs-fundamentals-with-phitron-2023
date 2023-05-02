#include <stdio.h>

int main()
{
    int n, k = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (size_t j = 1; j <= k; j++)
        {
            printf("*");
        }
        printf("\n");
        k++;
    }
    return 0;
}