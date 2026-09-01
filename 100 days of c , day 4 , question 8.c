#include <stdio.h>

int main(){
    int n;
    printf("Enter a natural number; ");
    scanf("%d", &n);

    printf("Sum of n natural numbers : %d\n ", n * (n+1)/2);
    return 0;
}