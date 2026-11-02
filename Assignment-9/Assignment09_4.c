// write a program to find  odd factorial of given number 

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;

    while(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo = iNo -2;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d",iRet);

    return 0 ;
}