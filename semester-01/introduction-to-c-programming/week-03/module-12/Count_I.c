#include <stdio.h>

int main()
{
    int n, even = 0, odd = 0;
    scanf("%d", &n);
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);

    return 0;
}