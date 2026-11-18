// Accept string from user and display it in reverse order

#include <stdio.h>
#include <string.h>

void Reverse(char *str)
{
    int iLength = strlen(str);
    for (int i = iLength - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    return 0;
}