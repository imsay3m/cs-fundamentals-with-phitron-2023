#include <stdio.h>
#include <string.h>
int is_palindrome(char *str1)
{
    char str2[11];
    strcpy(str2, str1);
    strrev(str2);
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char str[11];
    scanf("%s", str);
    int a = is_palindrome(str);
    if (a)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}