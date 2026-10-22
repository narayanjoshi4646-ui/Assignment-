// calculatr electricity bill

#include <stdio.h>
#include <stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    // Check for invalid negative input
    if (iUnits < 0) {
        printf("Invalid unit consumption!\n");
        return;
    }

    // Calculate bill based on slabs
    if (iUnits <= 100) {
        fBill = iUnits * 5.0f;[cite: 1]
    } 
    else if (iUnits <= 200) {
        fBill = (100 * 5.0f) + ((iUnits - 100) * 7.0f);[cite: 1]
    } 
    else {
        fBill = (100 * 5.0f) + (100 * 7.0f) + ((iUnits - 200) * 10.0f);[cite: 1]
    }

    // Print the output matching the expected format
    printf("Bill = %.2f\n", fBill);[cite: 1];
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units: ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}