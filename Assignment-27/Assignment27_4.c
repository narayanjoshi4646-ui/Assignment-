// accept string from user and check whether it contains vowels or not

#include <stdio.h>
#include <stdbool.h>
BOOL CheckVowel(char *str)
{
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return true;
        }
        str++;
    }
    return false;
}
int main()
{
    char Arr[20];
    BOOL bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckVowel(Arr);
    if (bRet == true)
    {
        printf("contains vowels\n");
    }
    else
    {
        printf("there is no vowels\n");
    }

    return 0;
}
