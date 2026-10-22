// acepect one number from user and print that number of * on screen

#include<stdio.h>

void Accept(int ino)
{
    int i = 0;
    for(i = 1; i <= ino; i++)
    {
        printf("*");
    }
}
    int main()
    {
        int iValue = 0;
        iValue = 5;
        Accept(iValue);
        return 0;
       
    } 