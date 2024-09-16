#include <stdio.h>

int main(){
	int weight;
	
	printf("Enter weight of package: ");
	scanf("%d",&weight);
	
	if(weight > 0 && weight <=5){
		printf("cost is $10");
	}
	else if(weight > 5 && weight <=10){
		printf("cost is $20");
	}
	else if(weight > 10){
		printf("cost is $30");
	}
	else{
		printf("Invalid Weight");
	}
	return 0;	
}
