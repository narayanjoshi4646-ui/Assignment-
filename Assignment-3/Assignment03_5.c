#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cVal)
{
    if (cVal == 'a' || cVal == 'e' || cVal == 'i' || cVal == 'o' || cVal == 'u' ||
        cVal == 'A' || cVal == 'E' || cVal == 'I' || cVal == 'O' || cVal == 'U')
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

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return 0;
}