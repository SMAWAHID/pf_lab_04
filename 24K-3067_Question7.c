#include <stdio.h>

int main(){
	int std_score;
	
	printf("Enter your score: ");
	scanf("%d",&std_score);
	
	if(std_score >= 0 && std_score <60){
		 printf("Your grade is: F");
		 }
	else if(std_score >= 60 && std_score < 70){
		printf("Your grade is: D");
		}	
	else if(std_score >=70 && std_score < 80){
		printf("Your grade is: C");
		}
	else if(std_score >= 80 && std_score < 90){
		printf("Your grade is: B");
		}
	else if(std_score >= 90 && std_score <=100){
		printf("Your grade is: A");
		}
	else{
		printf("Invalid Score");
		}
	
	return 0;
}
