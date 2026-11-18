// Accept division of student from user and depends on the division display exem timing.there are 4 divisions A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
#include <stdio.h>

void DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf("%c", &cValue);

     DisplaySchedule(cValue);

    return 0;
}