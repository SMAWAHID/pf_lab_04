#include <stdio.h>

int main(){
int id, units, amountCharged, surchargeAmount;
float  charge, netAmount;

printf("Enter your Id: ");
scanf("%d", &id);

printf("Enter Units used: ");
scanf("%d", &units);

if (units<199){ 
	charge= 16.20;
	amountCharged = units * 16.20;
	netAmount = amountCharged;
}
else if(units>=200 && units<300){
	amountCharged = units * 20.10;
	netAmount = amountCharged;
	charge = 20.10;
}
else if(units>=300 && units<500){
	amountCharged = units * 27.10;
	netAmount = amountCharged;
	charge = 27.10;
}
else if(units>=500){
	amountCharged = units * 35.90;
	netAmount = amountCharged;
	charge = 35.90;
}
if (amountCharged>18000){
	surchargeAmount = (amountCharged*15/100);
	netAmount = amountCharged + surchargeAmount;
}

printf("Customer ID: %d\n", id);
printf("Units Consumed: %d\n", units);
printf("Amount charges @Rs. %.2f per unit: %d\n", charge, amountCharged);
printf("Surcharge Amount: %d\n", surchargeAmount);
printf(" Net Amount paid by the Customer: %.2f\n", netAmount);

return 0;
}
