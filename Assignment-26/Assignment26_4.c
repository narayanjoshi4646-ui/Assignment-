// Accept character from user and check whether it is special symbol or not

#include <stdio.h>

void CheckSpecialSymbol(char ch)
{
    if((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
    {
        printf("Character is a special symbol: %c\n", ch);
    }
    else
    {
        printf("Character is not a special symbol: %c\n", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    CheckSpecialSymbol(cValue);

    return 0;
}