// Write a program which accept string from user and convert into lower case.
#include <stdio.h>
void strlwrX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    strlwrX(arr);

    printf("String in lower case: %s\n", arr);
    
    return 0;
}