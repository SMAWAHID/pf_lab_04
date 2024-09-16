#include <stdio.h>

int main() {
    int time;
    printf("Enter time: ");
    scanf("%d", &time);
    
    if (time >= 5 && time <= 24){
        if (time >= 5 && time <= 11) {
        printf("Good Morning");
    }
    else if (time >= 12 && time <= 18) {
        printf("Good Evening");
    }
    else {
        printf("Good Night");
    }
    }
    
    return 0;
}
