#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    
    if (a >= 0){
        if ( a == 0){
            printf("The number is zero.\n");
        }
        if ( a > 0) {
            printf("The number is positive.\n");
        }
    }
        if ( a < 0){
            printf("The number is negative.\n");
        }
    return 0;
    }
