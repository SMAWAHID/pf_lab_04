#include <stdio.h>

int main(){
	int score;
	printf("Enter score: ");
	scanf("%d", &score);
	
	if (score >= 700){
		printf("Eligibible for loan\n");
	}
	else if(score >= 600 && score <700){
		printf("More Documents required\n");
	}
	else if(score <600 && score> 0){
		printf("Not Eligible");
	}
	else{
		printf("Invalid Score");
	}	
	
	return 0;
}
