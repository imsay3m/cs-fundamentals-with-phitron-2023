#include <stdio.h>

int main()
{
    char a[1001];
    scanf("%s", a);
    int s = 0, c = 0;
    for (size_t i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("%d %d", c, s);

    return 0;
}