// amount in US dollor and return in indian currency 

#include<stdio.h>

float DollorToINR(float iNo)
{
    float inrAmount;
    
    const float exchangeRate = 70.0;

    inrAmount = iNo * exchangeRate;

    return inrAmount ;
} 

float main()
{
    float  iValue = 0,iRet = 0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet =  DollorToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;

}