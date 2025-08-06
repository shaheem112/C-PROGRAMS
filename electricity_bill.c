#include <stdio.h>

int main() {
    int units;
    float bill, interest, total_bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units); // Read units from user input

    // Calculation logic for electricity bill (assuming a rate and interest calculation)
    // For demonstration, let's assume a rate of 5 per unit and 10% interest.
    float rate_per_unit = 5.0;
    float interest_rate = 0.10;

    bill = units * rate_per_unit;
    interest = bill * interest_rate;
    total_bill = bill + interest;

    printf("Electricity Bill for %d units: %.2f\n", units, total_bill);
    
    return 0;
}