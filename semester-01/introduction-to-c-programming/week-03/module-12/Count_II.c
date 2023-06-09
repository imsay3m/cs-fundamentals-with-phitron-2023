#include <stdio.h>

int main()
{
    char a[1001];
    scanf("%s", a);
    int v = 0;
    for (size_t i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            v++;
        }
    }
    printf("%d", v);

    return 0;
}