#include <stdio.h>
#include <string.h>

int main()
{
    char a[200], b[100];
    scanf("%s %s", &a, &b);
    int k = strlen(a);
    for (size_t i = 0; i < strlen(b); i++, k++)
    {
        a[k] = b[i];
    }
    a[k] = '\0';
    printf("%s\n%s", a, b);

    return 0;
}