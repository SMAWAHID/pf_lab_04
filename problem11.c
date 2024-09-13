#include <stdio.h>

int main(){
	int temp;
	printf("Enter temperature: ");
	scanf("%d", &temp);
	
	if (temp > 30){
		printf("Hot");
	}
	else if(temp <= 30 && temp> 15){
		printf("Cold");
	}
	else if(temp <= 30 && temp> 15){
		printf("Warm");
	}
	else {
		printf("Cold");
	}	
	
	return 0;
}
