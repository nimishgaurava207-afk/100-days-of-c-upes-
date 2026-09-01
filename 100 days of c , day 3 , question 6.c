#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);
    c = a * b;
    b = c / b;
    a = c / a;
    printf("After swapping: a = %d, b = %d\n", a,b);
    return 0;
}