// write a program which Accept string from user and count capital letters from that string

#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("%d\n", iRet);

    return 0;
}