// Accept one number from user and print that number of * on screen

#include<stdio.h>
void Display(int ino)
{
    int iCnt = 0;
    // Write Updater
    while(iCnt < ino)
    {
        printf("*");
        iCnt++;
    }
}
    int main()
    {
        int iValue = 0;

        printf("Enter number ");
        scanf("%d",&iValue);

        Display(iValue);

        return 0 ;
        
    }