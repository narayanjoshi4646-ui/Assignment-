// input : Marvellous Multi OS
// M
// output : 0

#include <stdio.h>
int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            break;
        }
        str++;
        iCnt++;
    }
    if (*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    printf("Enter character:\n");

    
    scanf(" %c", &cValue);

    iRet = FirstChar(arr, cValue);

    if (iRet == -1)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurrence of character is : %d\n", iRet);
    }

    return 0;
}