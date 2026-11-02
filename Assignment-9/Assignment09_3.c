// write a program to find factorial of given number 

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iFact = 1;

    while(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
    }
    return iFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is %d",iRet);

    return 0 ;
}