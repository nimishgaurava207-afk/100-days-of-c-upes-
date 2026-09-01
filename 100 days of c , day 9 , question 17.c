#include <stdio.h>
#include <math.h>

int main (){
     float a , b , c , d , r1 , r2;
    printf(" Enter the values of a, b, c,: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    
    if (d < 0){
        printf(" The roots are imaginary");
    }
    else {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / ( 2 * a);

        printf("Root 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n" , r2);
    }
    return 0;
}