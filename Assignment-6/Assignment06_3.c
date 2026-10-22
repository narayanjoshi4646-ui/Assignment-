// calculate shopping Discount

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0.0f)
    {
        printf("Invalid input\n");
        return;
    }

    // Determine discount percentage
    if (fAmount < 1000.0f)
    {
        fDiscount = 0.0f;
    }
    else if (fAmount >= 1000.0f && fAmount < 5000.0f)
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    // Calculate final payable amount
    fFinalAmount = fAmount - (fAmount * (fDiscount / 100.0f));

    printf("Payable Amount = %.2f\n", fFinalAmount);
}
int main()
{
    float fAmount = 0.0f;
    printf("enter purchase amount :");
    scanf("%f",&fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
