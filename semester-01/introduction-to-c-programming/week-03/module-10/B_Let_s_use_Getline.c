#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    fgets(a, 100001, stdin);
    int len = strlen(a);
    for (size_t i = 0; a[i] != '\\'; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}