#include <stdio.h>

int main()
{
    int n, x, count = 0;
    scanf("%d", &n);
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}