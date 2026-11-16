// input : Marvellous Multi OS
// output : mARVELLOUS mULTI os

#include <stdio.h>
void strToggleX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    strToggleX(arr);

    printf("Modified string: %s\n", arr);
    
    
    return 0;
}