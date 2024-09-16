#include <stdio.h>

int main(){
	int temp;
	
	printf("Enter Temperature: ");
	scanf("%d", &temp);
	
	if (temp < -273 || temp > 273){
		printf("Invalid Temperature");
		return 1;
	}
	
	if (temp > 30){
		printf("Hot");
	}
	else if(temp <= 30 && temp>= 15){
		printf("Warm");
	}
	else{
		printf("Cold");
	}
	
	return 0;
}
