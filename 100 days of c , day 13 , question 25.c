#include <stdio.h>
int main(){
    int num_1, num_2, sum, difference, product, quotient, remainder;
    printf("Enter both numbers: ");
    scanf("%d %d" , &num_1, &num_2);

    sum = num_1 + num_2;
    difference = num_1 - num_2;
    product = num_1 * num_2;
    quotient = num_1 / num_2;
    remainder = num_1 % num_2;

    printf("The sum of both numbers is %d\n" , sum);
    printf("The difference of both numbers is %d\n" , difference);
    printf("The product of both numbers is %d\n" , product);
    printf(" The quotient of both numbers is %d\n" , quotient);
    printf("The remainder of both numbers is %d\n" , remainder);

    return 0;

}
