// input : Marvellous Multi OS
// output : MARVELLOUS MULTI OS

#include <stdio.h>
void struprX(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    struprX(arr);

    printf("Modified string: %s\n", arr);
    
    return 0;
}