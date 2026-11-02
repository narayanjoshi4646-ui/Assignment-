// if number is less then 50 print small  
// & no is less ten 100 then print medium 
// & number is greter then 100 print large

#include<stdio.h>

void Number(int iNo)
{  
    if(iNo < 50)
        {
            printf("samll\n");

        }
        else if (iNo <= 100)
        {
            printf("Medium\n");
        }
        else
        {
            printf("large\n");
        }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}