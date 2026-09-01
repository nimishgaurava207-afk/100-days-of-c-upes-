#include <stdio.h>
#include <math.h>

int main(){
    int side_a , side_b , side_c, inta2, intb2, intc2;
    float angle_a, angle_b, angle_c;

    printf("Enter the three sides:");
    scanf("%d %d %d" , &side_a, &side_b, &side_c);
    
    printf("Enter the three angles: ");
    scanf("%f %f %f" , &angle_a, &angle_b, &angle_c);

    if ( side_a + side_b > side_c && side_b + side_c > side_a && side_c + side_a > side_b){
        printf("It is a triangle.\n");
    }
    else{ 
        printf("It is not a triangle.\n");
    }
    if(side_a == side_b && side_b == side_c){
        printf("It is an equilateral triangle.\n");
    }
    else if ( side_a == side_b || side_b == side_c || side_c == side_a){
        printf(" It is an isosceles triangle ");
    }
    else  {
        printf("It is a scalene triangle ");
    }

    inta2 = side_a * side_a;
    intb2 = side_b * side_b;
    intc2 = side_c * side_c;
    if ( inta2 == intb2 + intc2 || intb2 == inta2 + intc2 || intc2 == inta2 + intb2  ){
        printf("It is a right angled triangle.\n");
    }
    
    return 0;

}