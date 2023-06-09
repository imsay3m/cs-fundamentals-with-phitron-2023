#include <stdio.h>

int main()
{
    int n, aCount = 0, bCount = 0;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a > b)
        {
            aCount++;
        }
        if (a < b)
        {
            bCount++;
        }
    }
    if (aCount == bCount)
    {
        printf("Draw\n");
    }
    else if (aCount > bCount)
    {
        printf("Tiger\n");
    }
    else if (aCount < bCount)
    {
        printf("Pathan\n");
    }

    return 0;
}