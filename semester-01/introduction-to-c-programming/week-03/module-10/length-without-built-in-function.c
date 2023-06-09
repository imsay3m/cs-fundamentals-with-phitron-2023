#include <stdio.h>

int main()
{
    char a[100];
    int count = 0;
    scanf("%s", a);
    for (size_t i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    return 0;
}