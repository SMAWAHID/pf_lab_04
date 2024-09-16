#include <stdio.h>

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    
    if (num == 0) {
        printf("Number is 0");
    }
    else if (num%2 == 0) {
        printf("Even Number");
    }
    else {
        printf("Odd Number");
    }
    return 0;
}
