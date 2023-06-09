#include <stdio.h>
#include <string.h>

int main()
{
    int count[26] = {0};
    char a[1001];
    scanf("%s", a);
    int value;
    for (int i = 0; i < strlen(a); i++)
    {
        value = a[i] - 97;
        count[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        value = i + 97;
        printf("%c - %d\n", value, count[i]);
    }

    return 0;
}