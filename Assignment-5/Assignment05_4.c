// check Divisibility by 3 and 5

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    
    if (iValue % 3 == 0 && iValue % 5 == 0)
    {
        printf("%d -> Divisible by Both\n", iValue);
    }
    else if (iValue % 3 == 0)
    {
        printf("%d -> Divisible by 3 Only\n", iValue);
    }
    else if (iValue % 5 == 0)
    {
        printf("%d -> Divisible by 5 Only\n", iValue);
    }
    else
    {
        printf("%d -> Not Divisible by Either\n", iValue);
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}