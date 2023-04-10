#include <stdio.h>

int main()
{
    int n, a, b, temp = 0;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a >= temp)
        {
            temp = a;
            b = temp;
        }
    }
    printf("%d\n", b);

    return 0;
}