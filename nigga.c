#include <stdio.h>
#define MAX_DIVISORS 1000

int a_divisors[MAX_DIVISORS];
int b_divisors[MAX_DIVISORS];

int areCoprime(int a, int b) {
    for (int i = 0; i < MAX_DIVISORS; i++) {
        a_divisors[i] = -1;
        b_divisors[i] = -1;
    }
    int max = a > b ? a : b;
    for (int i = 0; i < max; i++) {
        if (a % i == 0) {
            a_divisors[i] = i;
        }
        if (b % i == 0) {
            b_divisors[i] = i;
        }
    }
    return 0;
}

int main() {
    areCoprime(20, 5);
    printf("A: ");
    for(int i = 0; a_divisors[i] == -1; i++) {
        printf("%d, ", a_divisors[i]);
    }
    printf("\nB: ");
    for(int i = 0; b_divisors[i] == -1; i++) {
        printf("%d, ", b_divisors[i]);
    }
    printf("\n");
    
    return 0;
}                                    ````````````````
