#include <stdio.h>
#include <string.h>

int main()
{
    // copying from b to a
    // b size will be copied to a string
    char a[100], b[100];
    scanf("%s %s", a, b);
    for (size_t i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s %s", a, b);

    return 0;
}