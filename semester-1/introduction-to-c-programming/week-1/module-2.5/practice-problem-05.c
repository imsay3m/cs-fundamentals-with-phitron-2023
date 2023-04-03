#include <stdio.h>
int main()
{
    int money;
    scanf("%d", &money);
    if (money >= 10000)
    {
        printf("Gucci Bag\n");
        if (money > 20000)
        {
            printf("Gucci Belt\n");
        }
    }
    else if (money >= 5000)
    {
        printf("Levis Bag\n");
    }
    else
    {
        printf("Something\n");
    }

    return 0;
}