// Accept number of rows and number of columns from user and display below pattern
// input : iRow = 3 iCol = 5
// OUTPUT : A   A   A   A   A   
//          B   B   B   B   B   
//          C   C   C   C   C

#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i, j;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        ch = 'A' + (i - 1);
        for(j = 1; j <= iCol; j++)
        {
            printf("%4c", ch);
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