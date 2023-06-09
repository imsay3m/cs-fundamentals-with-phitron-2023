#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 48 && a <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        printf("ALPHA\n");
        if (a >= 65 && a <= 90)
        {
            printf("IS CAPITAL\n");
        }
        else
        {
            printf("IS SMALL\n");
        }
    }

    return 0;
}