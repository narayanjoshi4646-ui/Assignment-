//total marks and obtained marks from user and calculate percentage

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    if (iNo1 == 0)
    {
        return 0.0f; 
    }
    return ((float)iNo2 / (float)iNo1) * 100.0f;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks");
    scanf("%d",&iValue2);
    
    fRet = Percentage(iValue1, iValue2);
    
    printf("Percentage is: %f", fRet);
    
    return 0;
}