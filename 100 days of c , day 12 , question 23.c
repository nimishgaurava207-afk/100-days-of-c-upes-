

#include <stdio.h>

int main(){
    int days;
    int fine = 0;
    printf("Enter number of late days: ");
    if (scanf("%d", &days) != 1){
        printf("Invalid output.\n");
        return 1;
    }

    if ( days <= 0){
        printf(" No fine would be issued.\n");
    }

    else if  ( days <= 5){
        fine = days * 2;
        printf("Total fine is: ₹%d\n" , fine);
    }
    else if ( days <= 10){
        fine = ((5 * 2) + ( days - 5) * 4);
        printf("Total fine is: ₹%d\n" , fine);
    }
    else if  ( days <= 30){
        fine = ((5 * 2) + ( 5 *4) + (days - 10) * 4);
        printf("Total fine is: is ₹%d\n" , fine);
    }

    else {
        printf("Membership cancelled.\n");
    }
    return 0;
}
