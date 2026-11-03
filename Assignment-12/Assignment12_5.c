//write a program which accept number from user and count frequency of digits are less then 6 in it.

#include<stdio.h>
#include<stdlib.h>

int Count(int iNo)
{
    int iCount = 0;

    if(iNo == 0)
    {
        return 1;
    }

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return EXIT_SUCCESS;
}