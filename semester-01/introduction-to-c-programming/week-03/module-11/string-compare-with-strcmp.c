#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int value = strcmp(a, b);
    //-1 = a is minimum
    // 0 = same
    // 1 = b is minimum
    printf("%d\n", value);
    return 0;
}