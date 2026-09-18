#include <stdio.h>

int main() {
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    
    if ((year / 100) * 100 == year) {
        if ((year / 400) * 400 == year) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    } 
    
    else {
        if ((year / 4) * 4 == year) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    }
    
    return 0;
}
