#include <stdio.h>
#include <string.h>

int main()
{
    int count[26] = {0};
    char a[100];
    scanf("%s", a);
    for (size_t i = 0; i < strlen(a); i++)
    {
        count[a[i] - 'a']++;
    }
    for (size_t i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, count[i]);
    }

    return 0;
}