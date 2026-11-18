// diffrence Between frequncy of small and capital letters
#include <stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        str++;
    }
    return (iSmall - iCapital);
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);



    

    printf("%d\n", iRet);

    return 0;
}