#include <stdio.h>
#include <string.h>
int capitalChar(char *c)
{
    int count = 0;
    for (size_t i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            count++;
        }
    }
    return count;
}
int smallChar(char *c)
{
    int count = 0;
    for (size_t i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            count++;
        }
    }
    return count;
}
int spaceChar(char *c)
{
    int count = 0;
    for (size_t i = 0; i < strlen(c); i++)
    {
        if (c[i] == ' ')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    char str[1001];
    fgets(str, 1001, stdin);
    int capital = capitalChar(str);
    int small = smallChar(str);
    int space = spaceChar(str);
    printf("Capital - %d\nSmall - %d\nSpaces - %d\n", capital, small, space);

    return 0;
}