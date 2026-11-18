//  write a Program which display ASCII table . table contain symbol, Decimal, Hexadecimal and Octal value of all characters from 0 to 255.

#include <stdio.h>

void DisplayASCII()
{
    int i;
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    for (i = 0; i <= 255; i++)
    {
        printf("%c\t%d\t%X\t%o\n", i, i, i, i);
    }
}
int main()
{
    DisplayASCII();
    return 0;
}