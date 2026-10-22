input : a       output : A

#include<stdio.h>


 void DisplayConvert(char Cvalue)
{
    if(cvalue >= 'a'&& cvalue <='z')
    {
        printf("%c",cvalue);
    }
    else if(cvalue >= 'A' && cvalue <='Z')
    {
        printf("%c",cvalue);

    }
}
int main()
{
    char cvalue = '\0';
    printf("Enter character\n");
    scanf("%c",&cvalue);
            DisplayConvert (cvalue);

      return 0;
}
