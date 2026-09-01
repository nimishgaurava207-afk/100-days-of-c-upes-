#include <stdio.h>

int main(){
    int Units;
    int bill = 0;
    printf("Enter number of units used: ");
    scanf("%d" , &Units);

    if ( Units <= 100){
        bill = Units * 5;
        printf("Total bill is : ₹%d\n" , bill);
    }

    else if ( Units <= 200){
        bill = (( 100 * 2) + (Units - 100) * 7);
        printf(" Total bill is : ₹%d\n", bill);
    }
    else if ( Units <=  300){
        bill = ((100 * 2) + (100 * 7) + ( Units - 200) * 10);
        printf( "Total bill is : ₹%d\n" , bill);
    }

    else {
        bill = ( ( 100 * 2) + (100 * 7) + (Units - 300) * 12);
        printf( "Total bill is : ₹%d\n" , bill);
    }
    return 0;
}