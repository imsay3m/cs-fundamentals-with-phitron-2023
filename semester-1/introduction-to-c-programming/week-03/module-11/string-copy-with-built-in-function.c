#include <stdio.h>
#include <string.h>

int main()
{
    // copying from b to a
    // b size will be copied to a string
    char a[100], b[100];
    scanf("%s %s", a, b);
    strcpy(a, b); //(to,from)
    printf("%s %s", a, b);

    return 0;
}