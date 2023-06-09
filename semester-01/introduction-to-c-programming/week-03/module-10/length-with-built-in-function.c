#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s", a);

    int len = strlen(a);
    printf("length: %d\n", len);
    return 0;
}