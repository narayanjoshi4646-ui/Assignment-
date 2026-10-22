// accept one number and check whether is divisible by 5 or not 

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
      
      BOOL check( int no)
      {
      if((no % 5 == 0))
      {
            return TRUE;
      }
      else
      {
            return FALSE;
      }
      }
      int main() 
      {
        int iValue = 0;
        BOOL bRet = FALSE;
        printf("Enter number\n");
        scanf("%d",&iValue);
        bRet = check(iValue);
        if(bRet == TRUE)
        {
            printf("It is divisible by 5");
        }
        else
        {
            printf("It is not divisible by 5");
        }

        return 0;
       
      }    
