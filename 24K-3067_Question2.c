//Create a calculator asking for operator (+ or – or * or /) and operands and performs calculation

#include <stdio.h>

int main(){
	int num1, num2, sum, diff, division, product;
	char Operators; 
	
	printf("Enter a operator: ");
	scanf("%c", &Operators);
	
	printf("Enter number 1: ");
	scanf("%d", &num1);
	
	printf("Enter number 2: ");
	scanf("%d", &num2);
	
	
	
	switch(Operators){
		case '+' :
			sum = num1 + num2;
			printf("%d + %d = %d\n", num1, num2, sum);
			break;
		case '-' :
			diff = num1 - num2;
			printf("%d - %d = %d\n", num1, num2, diff);
			break;
		case '/' :
			division = num1 / num2;
			printf("%d / %d = %d\n", num1, num2, division);
			break;
		case '*' :
			product = num1 * num2;
			printf("%d * %d = %d\n", num1, num2, product);
			break;
		default :
			printf("Invalid Input");
			
	}
	return 0;
}
