// input : Marvellous Multi OS
//          e
// output : TRUE

#define TRUE 1
#define FALSE 0

#include <stdio.h>
typedef int BOOL;
BOOL ChkChar(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;
    }
    if (*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}
int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter character:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
