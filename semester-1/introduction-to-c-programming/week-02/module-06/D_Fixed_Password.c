#include <stdio.h>

int main()
{
    int n = 9999;
    for (int i = 9999; n <= i;)
    {
        scanf("%d", &n);
        if (n == 1999)
        {
            printf("Correct\n");
            return 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}