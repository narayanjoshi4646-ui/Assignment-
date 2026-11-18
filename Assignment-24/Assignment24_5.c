// input : abcd
// output : dcba

#include <stdio.h>
void strRevX(char *str)
{
    char *start = str;
    char *end = str;

    while (*end != '\0')
    {
        end++;
    }
    end--; 

    while (start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
int main()
{
    char arr[20];

    printf("Enter string:\n");
    scanf("%[^'\n']s", arr);

    strRevX(arr);
    printf("Modified string: %s\n", arr);
    
    return 0;
}