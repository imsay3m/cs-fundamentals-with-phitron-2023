#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int count[101] = {0}, a[n];

    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    printf("100:-%d\n", count[100]);
    for (size_t i = 0; i < 101; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}