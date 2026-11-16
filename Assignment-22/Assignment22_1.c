// Accept numbers from user and display below pattern.
// Input : 5
// Output : 1   2   3   4   5

#include<stdio.h>
void Pattern(int iNum)
{
    int i = 0;
    for(i = 1; i <= iNum; i++)
    {
        printf("%d\t", i);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter a number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}