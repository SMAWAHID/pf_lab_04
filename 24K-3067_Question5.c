#include <stdio.h>

int main() {
    int id, units;
    float amountCharged, surchargeAmount = 0, charge, netAmount;

    printf("Enter your Id: ");
    scanf("%d", &id);

    printf("Enter Units used: ");
    scanf("%d", &units);

    if (units < 199) { 
        charge = 16.20;
        amountCharged = units * charge;
    } 
    else if (units >= 200 && units < 300) {
        charge = 20.10;
        amountCharged = units * charge;
    } 
    else if (units >= 300 && units < 500) {
        charge = 27.10;
        amountCharged = units * charge;
    } 
    else if (units >= 500) {
        charge = 35.90;
        amountCharged = units * charge;
    }

    netAmount = amountCharged;

    if (amountCharged > 18000) {
        surchargeAmount = amountCharged * 0.15;
        netAmount = amountCharged + surchargeAmount;
    }

    printf("Customer ID: %d\n", id);
    printf("Units Consumed: %d\n", units);
    printf("Amount charges @Rs. %.2f per unit: %.2f\n", charge, amountCharged);
    printf("Surcharge Amount: %.2f\n", surchargeAmount);
    printf("Net Amount paid by the Customer: %.2f\n", netAmount);

    return 0;
}
