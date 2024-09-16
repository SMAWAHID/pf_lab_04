#include <stdio.h>

int main(){
	
	int Age;
		
	printf("Enter the Age: ");
	scanf("%d",&Age);
		
	if(Age >= 0 && Age <= 12){
			printf("Child");
		}
	else if(Age > 12 && Age <= 19){
			printf("Teenager");
		}
	else if(Age > 19 && Age <= 64){
			printf("Adult");
		}
	else if(Age > 64){
			printf("Senior");
		}		
	else{
			printf("Invalid Age");
		}
		
	return 0;
}
