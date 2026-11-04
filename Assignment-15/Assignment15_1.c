//write a program to read full name and print  that screen

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[30];
    printf("Please enter full name");
    scanf("%s", Name);
    printf("Your name is %s", Name);
    return EXIT_SUCCESS;
}

