#include <stdio.h>
#include <string.h>

int main()
{
    char a[1001];
    char b[1001];
    scanf("%s %s", a, b);
    int alen = strlen(a);
    int blen = strlen(b);
    printf("%d %d\n", alen, blen);
    printf("%s %s\n", a, b);
    return 0;
}