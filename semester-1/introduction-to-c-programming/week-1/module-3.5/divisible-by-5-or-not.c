#include <stdio.h>

int main()
{
    int count;
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d Yes\n", i);
        }
        else
        {
            printf("%d No\n", i);
        }
    }
    return 0;
}