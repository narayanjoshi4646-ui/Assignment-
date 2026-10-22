// input :  7
// output : 2   4   6   8   10  12  14

#include<stdio.h>

void PrintEven(int ino)
{
    int i;
    if(ino <=0)
    {
            return ;
    }
    for(i = 1; i <= ino *2;i++)
    {
        if(i % 2 ==0)
        {
            printf("%d\t",i);
        }
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}