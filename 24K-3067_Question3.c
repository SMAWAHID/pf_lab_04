//Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit, or special character, using if else.

#include <stdio.h>

int main(){
	char type;
	printf("Enter a Character: ");
	scanf("%c", &type);
	
	if (type >= 'a' && type<= 'z'){
		printf("Small Alphabet");
	}
	else if (type >= 'A' && type<= 'Z') {
		printf("Capital Alphabet");
	}
	else if (type >= '0' && type<= '9') {
		printf("Digit");
	}
	else{
		printf("Special Characters");
	}
	return 0;
}
