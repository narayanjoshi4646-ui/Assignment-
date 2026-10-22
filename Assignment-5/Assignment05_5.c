// identify charater type

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char cValue)
{
    // Write your logic here
    if (cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c -> Uppercase Alphabet\n", cValue);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("%c -> Lowercase Alphabet\n", cValue);
    }
    else if (cValue >= '0' && cValue <= '9')
    {
        printf("%c -> Digit\n", cValue);
    }
    else
    {
        printf("%c -> Special Character\n", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}