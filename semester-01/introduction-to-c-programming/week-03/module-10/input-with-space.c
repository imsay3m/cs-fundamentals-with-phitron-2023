#include <stdio.h>

int main()
{
    char a[100];
    fgets(a, 11, stdin);
    printf("%s\n", a);

    char b[100];

    fgets(b, 10, stdin);
    b[7] = '\0';
    printf("%s\n", b);
    return 0;
}