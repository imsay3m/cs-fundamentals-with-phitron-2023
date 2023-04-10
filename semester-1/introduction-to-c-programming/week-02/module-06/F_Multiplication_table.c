#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    for (size_t i = 1; i <= 12; i++)
    {
        int mul = a * i;
        printf("%d * %d = %d\n", a, i, mul);
    }

    return 0;
}