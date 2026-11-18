// if character is small letter display its corresponding capital letter
 // and if it is capital letter then display its corresponding small letter. In other cases display as it is.

#include <stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        printf("Corresponding capital letter: %c\n", ch - 32);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Corresponding small letter: %c\n", ch + 32);
    }
    else
    {
        printf("Character is not a letter: %c\n", ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character:\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}