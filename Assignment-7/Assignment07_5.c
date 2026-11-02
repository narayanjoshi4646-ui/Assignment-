// write a program which accept N and print 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
     int iCnt = 0;
  for(iCnt = 1;iCnt <= 5; iCnt++)
  {
        
            printf("%d\t",iCnt * iNo);     
  }
}
int main()
{
    int iValue = 0;
    printf("enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}