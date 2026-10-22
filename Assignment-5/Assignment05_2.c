// check leap year

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    
    if (iYear <= 0)
    {
        printf("Invalid Year\n");
    }
    else if ((iYear % 400 == 0) || (iYear % 4 == 0 && iYear % 100 != 0))
    {
        printf("%d -> Leap Year \n", iYear);
    }
    else
    {
        printf("%d -> Not a Leap year \n", iYear);    }
}

int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}