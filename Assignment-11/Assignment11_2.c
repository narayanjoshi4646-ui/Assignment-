#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    int iCnt = 0;
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}