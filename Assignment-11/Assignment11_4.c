#include<stdio.h>
#include<stdlib.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    int iSum = 0;
    int iCnt = 0;

    // Loop from iStart to iEnd
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d\n", iRet);

    return EXIT_SUCCESS;
}