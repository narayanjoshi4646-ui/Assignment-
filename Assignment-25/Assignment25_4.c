// Accept character from user and check whether it is small letter or not (a-z).
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if((ch >= 'a' && ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character:\n");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);
    if(bRet == TRUE)
    {
        printf("It is a small letter\n");
    }
    else
    {
        printf("It is not a small letter\n");
    }

    return 0;
}
