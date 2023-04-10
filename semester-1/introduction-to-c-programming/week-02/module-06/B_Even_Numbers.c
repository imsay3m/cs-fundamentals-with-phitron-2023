#include <stdio.h>

int main()
{
    int a, flag = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("-1\n");
    }

    return 0;
}