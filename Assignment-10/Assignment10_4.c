// write a program which accept temperature in Fahrenheit from user and convert it into celsius. (C = (F - 32) * (5/9))

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    
    dCelsius = (fTemp - 32) * (5.0 / 9.0);
    
    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is : %f\n", dRet);

    return 0;
}