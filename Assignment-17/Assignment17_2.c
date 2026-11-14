// Accept number of rows and number of columns from user and display below pattern
// Input : iRow = 4 iCol = 4
// Output : 2   4   6   8   10
//          1   3   5   7   9
//          2   4   6   8   10
//          1   3   5   7   9

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i, j;
    int num1 = 2;
    int num2 = 1;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 == 0)
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%4d", num2);
                num2 += 2;
            }
            num2 = 1;
        }
        else
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%4d", num1);
                num1 += 2;
            }
            num1 = 2;
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);
    
    Pattern(iValue1, iValue2);

    return 0;
}
