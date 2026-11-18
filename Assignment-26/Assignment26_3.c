// if it is capital then display character from input characters till Z if character is small then print all the characters in reverse order from input character till a. In other cases display as it is.

#include <stdio.h>
void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        printf("Characters from %c to Z:\n", ch);
        for(char i = ch; i <= 'Z'; i++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("Characters from %c to a in reverse order:\n", ch);
        for(char i = ch; i >= 'a'; i--)
        {
            printf("%c ", i);
        }
        printf("\n");
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