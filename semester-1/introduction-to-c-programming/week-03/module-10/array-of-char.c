#include <stdio.h>

int main()
{
    char name[5];
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%c", &name[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c", name[i]);
    }
    return 0;
}